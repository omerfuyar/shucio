#pragma once
#define SHUCIO_IMPLEMENTATION

#pragma region Shucio Declarations

typedef enum SHUKey
{
    SHUKey_Invalid = -1,

    SHUKey_Backspace = 8,
    SHUKey_Tab = 9,
    SHUKey_Enter = 10,
    SHUKey_Escape = 27,

    SHUKey_Space = 32,
    SHUKey_Exclamation = 33,
    SHUKey_QuoteDouble = 34,
    SHUKey_Hash = 35,
    SHUKey_Dollar = 36,
    SHUKey_Percent = 37,
    SHUKey_Ampersand = 38,
    SHUKey_Quote = 39,
    SHUKey_LeftParenthesis = 40,
    SHUKey_RightParenthesis = 41,
    SHUKey_Asterisk = 42,
    SHUKey_Plus = 43,
    SHUKey_Comma = 44,
    SHUKey_Minus = 45,
    SHUKey_Period = 46,
    SHUKey_Slash = 47,

    SHUKey_0 = 48,
    SHUKey_1 = 49,
    SHUKey_2 = 50,
    SHUKey_3 = 51,
    SHUKey_4 = 52,
    SHUKey_5 = 53,
    SHUKey_6 = 54,
    SHUKey_7 = 55,
    SHUKey_8 = 56,
    SHUKey_9 = 57,

    SHUKey_Colon = 58,
    SHUKey_Semicolon = 59,
    SHUKey_LessThan = 60,
    SHUKey_Equal = 61,
    SHUKey_GreaterThan = 62,
    SHUKey_QuestionMark = 63,
    SHUKey_At = 64,

    SHUKey_A = 65,
    SHUKey_B = 66,
    SHUKey_C = 67,
    SHUKey_D = 68,
    SHUKey_E = 69,
    SHUKey_F = 70,
    SHUKey_G = 71,
    SHUKey_H = 72,
    SHUKey_I = 73,
    SHUKey_J = 74,
    SHUKey_K = 75,
    SHUKey_L = 76,
    SHUKey_M = 77,
    SHUKey_N = 78,
    SHUKey_O = 79,
    SHUKey_P = 80,
    SHUKey_Q = 81,
    SHUKey_R = 82,
    SHUKey_S = 83,
    SHUKey_T = 84,
    SHUKey_U = 85,
    SHUKey_V = 86,
    SHUKey_W = 87,
    SHUKey_X = 88,
    SHUKey_Y = 89,
    SHUKey_Z = 90,

    SHUKey_BracketLeft = 91,
    SHUKey_Backslash = 92,
    SHUKey_BracketRight = 93,
    SHUKey_Caret = 94,
    SHUKey_Underscore = 95,
    SHUKey_GraveAccent = 96,

    SHUKey_a = 97,
    SHUKey_b = 98,
    SHUKey_c = 99,
    SHUKey_d = 100,
    SHUKey_e = 101,
    SHUKey_f = 102,
    SHUKey_g = 103,
    SHUKey_h = 104,
    SHUKey_i = 105,
    SHUKey_j = 106,
    SHUKey_k = 107,
    SHUKey_l = 108,
    SHUKey_m = 109,
    SHUKey_n = 110,
    SHUKey_o = 111,
    SHUKey_p = 112,
    SHUKey_q = 113,
    SHUKey_r = 114,
    SHUKey_s = 115,
    SHUKey_t = 116,
    SHUKey_u = 117,
    SHUKey_v = 118,
    SHUKey_w = 119,
    SHUKey_x = 120,
    SHUKey_y = 121,
    SHUKey_z = 122,

    SHUKey_LeftBrace = 123,
    SHUKey_VerticalBar = 124,
    SHUKey_RightBrace = 125,
    SHUKey_Tilde = 126,
    SHUKey_Delete = 127,

    SHUKey_ArrowDown = 258,
    SHUKey_ArrowUp = 259,
    SHUKey_ArrowLeft = 260,
    SHUKey_ArrowRight = 261,

    // SHUKey_F1 = 265,
    // SHUKey_F2 = 266,
    // SHUKey_F3 = 267,
    // SHUKey_F4 = 268,
    // SHUKey_F5 = 269,
    // SHUKey_F6 = 270,
    // SHUKey_F7 = 271,
    // SHUKey_F8 = 272,
    // SHUKey_F9 = 273,
    // SHUKey_F10 = 274,
    // SHUKey_F11 = 275,
    // SHUKey_F12 = 276
} SHUKey;

void SHU_Initialize(void);

void SHU_Terminate(void);

SHUKey SHU_Key(void);

#pragma endregion Shucio Declarations

#pragma region Shucio Definitions

#ifdef SHUCIO_IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <conio.h>
#else
#include <termios.h>
#include <unistd.h>
#endif

#ifndef _WIN32
static struct termios SHU_TERMIOS_RESTOREZ;
#endif

void SHU_Initialize(void)
{
#ifndef _WIN32
    tcgetattr(STDIN_FILENO, &SHU_TERMIOS_RESTOREZ);
    atexit(SHU_Terminate);

    struct termios rawTermios = SHU_TERMIOS_RESTOREZ;

    rawTermios.c_lflag &= ~(ECHO | ICANON);
    rawTermios.c_cc[VMIN] = 1;
    rawTermios.c_cc[VTIME] = 0;

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &rawTermios);
#endif
}

void SHU_Terminate(void)
{
#ifndef _WIN32
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &SHU_TERMIOS_RESTOREZ);
#endif
}

SHUKey SHU_Key(void)
{
#ifdef _WIN32
    int ch = _getch();

    if (ch == 0 || ch == 0xE0)
    {
        int ext = _getch();

        switch (ext)
        {
        case 72:
            return SHUKey_ArrowUp;
        case 80:
            return SHUKey_ArrowDown;
        case 75:
            return SHUKey_ArrowLeft;
        case 77:
            return SHUKey_ArrowRight;
        default:
            return SHUKey_Invalid;
        }
    }

    return (SHUKey)ch;
#else
    unsigned char ch;

    if (read(STDIN_FILENO, &ch, 1) != 1)
    {
        return SHUKey_Invalid;
    }

    if (ch == (unsigned char)SHUKey_Escape) // '\x1b'
    {
        unsigned char sequenceBuffer[8];
        unsigned char sequenceCount = 0;

        // Read the first character (usually '[' or 'O')
        if (read(STDIN_FILENO, &sequenceBuffer[sequenceCount], 1) != 1)
        {
            return SHUKey_Escape; // It was just an isolated escape key press
        }

        unsigned char currentChar = sequenceBuffer[sequenceCount];
        sequenceCount++;

        if (currentChar == '[' || currentChar == 'O')
        {
            while (sequenceCount < sizeof(sequenceBuffer))
            {
                if (read(STDIN_FILENO, &sequenceBuffer[sequenceCount], 1) != 1)
                {
                    break;
                }

                currentChar = sequenceBuffer[sequenceCount];
                sequenceCount++;

                if ((currentChar >= 'A' && currentChar <= 'Z') ||
                    (currentChar >= 'a' && currentChar <= 'z') ||
                    currentChar == '~') // terminators
                {
                    break;
                }
            }
        }

        if (sequenceBuffer[0] == '[')
        {
            switch (sequenceBuffer[sequenceCount - 1])
            {
            case 'A':
                return SHUKey_ArrowUp;
            case 'B':
                return SHUKey_ArrowDown;
            case 'D':
                return SHUKey_ArrowLeft;
            case 'C':
                return SHUKey_ArrowRight;
            default:
                return SHUKey_Invalid; //! for now
            }
        }

        return SHUKey_Escape;
    }

    return (SHUKey)ch;
#endif
}

#endif

#pragma endregion Shucio Definitions
