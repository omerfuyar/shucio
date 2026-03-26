#pragma once

#pragma region Shucio Macros

#define SHU_SEQUENCE_BUFFER_SIZE 8
#define SHU_STRING_BUFFER_SIZE 32

#pragma endregion Shucio Macros

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

typedef enum SHUAttribute
{
    SHUAttribute_Invalid = -1,
    SHUAttribute_Reset = 0,

    SHUAttribute_Bold = 1,
    SHUAttribute_Underline = 4,
    SHUAttribute_Blink = 5,
    SHUAttribute_Reverse = 7,

    SHUAttribute_BoldOff = 22,
    SHUAttribute_UnderlineOff = 24,
    SHUAttribute_BlinkOff = 25,
    SHUAttribute_ReverseOff = 27,

    SHUAttribute_ColorFGBlack = 30,
    SHUAttribute_ColorFGRed = 31,
    SHUAttribute_ColorFGGreen = 32,
    SHUAttribute_ColorFGYellow = 33,
    SHUAttribute_ColorFGBlue = 34,
    SHUAttribute_ColorFGMagenta = 35,
    SHUAttribute_ColorFGCyan = 36,
    SHUAttribute_ColorFGWhite = 37,
    SHUAttribute_ColorFGDefault = 39,

    SHUAttribute_ColorBGBlack = 40,
    SHUAttribute_ColorBGRed = 41,
    SHUAttribute_ColorBGGreen = 42,
    SHUAttribute_ColorBGYellow = 43,
    SHUAttribute_ColorBGBlue = 44,
    SHUAttribute_ColorBGMagenta = 45,
    SHUAttribute_ColorBGCyan = 46,
    SHUAttribute_ColorBGWhite = 47,
    SHUAttribute_ColorBGDefault = 49,

    SHUAttribute_Frame = 51,
    SHUAttribute_Encircle = 52,
    SHUAttribute_Overline = 53,

    SHUAttribute_FrameEncircleOff = 54,
    SHUAttribute_OverlineOff = 55,
} SHUAttribute;

// todo add attributes that not widely supported like rgb colors

/// @brief Initializes the Shucio library. Must be called before any other function inside.
void SHU_Initialize(void);

/// @brief Terminates the Shucio library and cleans up the settings.
/// @note  It's called automatically on program exit, but you can also call it manually if you want to clean up before exiting. Disables alternate screen buffer, sets cursor visible, resets terminal attributes.
void SHU_Terminate(void);

/// @brief Get a blocking key input from user. Use with SHUKey enum.
/// @return Entered key from user.
SHUKey SHU_Key(void);

/// @brief Gets a string input from the user on cursor place, echoes the characters to terminal.
/// @param buffer Buffer to get user input string.
/// @param bufferSize Size of the string buffer.
/// @note Handles basic editing keys like backspace and enter. Sets cursor visibility to true, so dont forget to re-set it to your state. Also does not clean the echoed characters.
void SHU_Input(char *buffer, unsigned long long bufferSize);

/// @brief Moves the cursor by the specified amount in the x and y directions.
/// @param x Amount to move cursor horizontally. Positive values move right, negative values move left.
/// @param y Amount to move cursor vertically. Positive values move down, negative values move up.
void SHU_MoveCursor(int x, int y);

/// @brief Sets the cursor position to the specified coordinates. 0,0 is the top-left corner of the terminal.
/// @param x X coordinate.
/// @param y Y coordinate.
void SHU_SetCursorPosition(int x, int y);

/// @brief Sets the visibility of the cursor.
/// @param visible 1 to show the cursor, 0 to hide it.
void SHU_SetCursorVisibility(int visible);

/// @brief Enters or exits the terminal's alternate screen buffer. Alternate screen buffer is a separate screen that can be used for full-screen applications, and when you exit it, the original screen content is restored.
/// @param enable 1 to enter alternate screen buffer, 0 to exit it.
void SHU_SetTerminalAlternate(int enable);

///! This function is not meant to be used directly. Use SHU_SetAttributes macro instead.
void SHU_SetAttribute(SHUAttribute attribute, ...);

/// @brief Sets the specified set of attributes for text output.
/// @param attributes Attributes to set. Must be used with SHUAttribute enum. You can also pass multiple attributes by using the variadic arguments.
#define SHU_SetAttributes(...) SHU_SetAttribute(__VA_ARGS__, SHUAttribute_Invalid)

/// @brief Gets the current cursor position and stores it in the provided x and y pointers. 0,0 is the top-left corner of the terminal.
/// @param x Pointer to store the x coordinate of the cursor position.
/// @param y Pointer to store the y coordinate of the cursor position.
void SHU_GetCursorPosition(int *x, int *y);

/// @brief Gets the current terminal size in characters and stores it in the provided width and height pointers.
/// @param width Pointer to store the width of the terminal.
/// @param height Pointer to store the height of the terminal.
void SHU_GetTerminalSize(int *width, int *height);

/// @brief Clears the entire terminal screen and moves the cursor to the top-left corner. Note that this does not clear the scrollback buffer, so users can still scroll up to see the previous content.
void SHU_ClearTerminal(void);

/// @brief Outputs a single character to the terminal.
/// @param c Character to output.
void SHU_PutCharacter(int c);

/// @brief Outputs a formatted string to the terminal. Uses printf-style formatting.
/// @param format Format string.
/// @param args Arguments for the format string.
void SHU_PutString(const char *format, ...);

#pragma endregion Shucio Declarations

#pragma region Shucio Definitions

#ifdef SHUCIO_IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#ifdef _WIN32
#include <windows.h>
#include <conio.h>

static DWORD SHU_CONSOLE_MODE_RESTORE;
#else
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>

static struct termios SHU_TERMIOS_RESTORE;
#endif

#define SHU_Assert(condition, str, ...)                                                                               \
    do                                                                                                                \
    {                                                                                                                 \
        if (!(condition))                                                                                             \
        {                                                                                                             \
            fprintf(stderr, "Assertion failed: %s, %s, %d : " str "\n", __FILE__, __func__, __LINE__, ##__VA_ARGS__); \
            exit(EXIT_FAILURE);                                                                                       \
        }                                                                                                             \
    } while (0)

void SHU_Initialize(void)
{
    atexit(SHU_Terminate);

#ifdef _WIN32
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleMode(hOut, &SHU_CONSOLE_MODE_RESTORE);

    DWORD dwMode = SHU_CONSOLE_MODE_RESTORE;
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
#else
    tcgetattr(STDIN_FILENO, &SHU_TERMIOS_RESTORE);

    struct termios rawTermios = SHU_TERMIOS_RESTORE;

    rawTermios.c_lflag &= ~(ECHO | ICANON);
    rawTermios.c_cc[VMIN] = 1;
    rawTermios.c_cc[VTIME] = 0;

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &rawTermios);
#endif
}

void SHU_Terminate(void)
{
    atexit(NULL);

    SHU_SetCursorVisibility(1);
    SHU_SetAttribute(SHUAttribute_Reset);
    SHU_SetTerminalAlternate(0);

#ifdef _WIN32
    SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), SHU_CONSOLE_MODE_RESTORE);
#else
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &SHU_TERMIOS_RESTORE);
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
        unsigned char sequenceBuffer[SHU_SEQUENCE_BUFFER_SIZE];
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
            while (sequenceCount < SHU_SEQUENCE_BUFFER_SIZE)
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

void SHU_Input(char *buffer, unsigned long long bufferSize)
{
    SHU_Assert(buffer != NULL, "Buffer cannot be NULL");
    SHU_Assert(bufferSize > 0, "BufferSize must be greater than 0");

    SHU_SetCursorVisibility(1);

    unsigned long long index = 0;

    while (1)
    {
        SHUKey key = SHU_Key();

        if (key == SHUKey_Enter)
        {
            printf("\n");
            break;
        }

        if (key == SHUKey_Backspace || key == SHUKey_Delete)
        {
            if (index > 0)
            {
                index--;
                printf("\b \b");
                fflush(stdout);
            }
        }

        else if (key >= SHUKey_Space && key <= SHUKey_Tilde)
        {
            if (index < bufferSize - 1)
            {
                buffer[index++] = (char)key;

                putchar((char)key);
                fflush(stdout);
            }
        }
    }

    buffer[index] = '\0';
}

void SHU_MoveCursor(int x, int y)
{
    if (x > 0)
    {
        printf("\033[%dC", x);
    }
    else if (x < 0)
    {
        printf("\033[%dD", -x);
    }

    if (y > 0)
    {
        printf("\033[%dB", y);
    }
    else if (y < 0)
    {
        printf("\033[%dA", -y);
    }

    fflush(stdout);
}

void SHU_SetCursorPosition(int x, int y)
{
    printf("\033[%d;%dH", y + 1, x + 1);
    fflush(stdout);
}

void SHU_SetCursorVisibility(int visible)
{
    printf(visible ? "\033[?25h" : "\033[?25l");
    fflush(stdout);
}

void SHU_SetTerminalAlternate(int enable)
{
    printf(enable ? "\033[?1049h" : "\033[?1049l");
    fflush(stdout);
}

void SHU_SetAttribute(SHUAttribute attribute, ...)
{
    printf("\033[%dm", (int)attribute);

    va_list args;
    va_start(args, attribute);

    int next_attr = -1;
    while ((next_attr = va_arg(args, int)) != -1)
    {
        printf("\033[%dm", next_attr);
    }

    va_end(args);
}

void SHU_GetCursorPosition(int *x, int *y)
{
    SHU_Assert(x != NULL && y != NULL, "x and y pointers cannot be NULL");

    printf("\033[6n");
    fflush(stdout);

    // ESC [ row ; col R
    int row = 0, col = 0;

    char cursorPosBuffer[SHU_STRING_BUFFER_SIZE] = {0};
    unsigned int i = 0;
    while (i < SHU_STRING_BUFFER_SIZE - 1)
    {
#ifdef _WIN32
        cursorPosBuffer[i] = (char)_getch();
#else
        read(STDIN_FILENO, &cursorPosBuffer[i], 1);
#endif

        if (cursorPosBuffer[i] == 'R')
        {
            break;
        }

        i++;
    }

    cursorPosBuffer[i] = '\0';

    SHU_Assert(cursorPosBuffer[0] == '\x1b' && cursorPosBuffer[1] == '[', "Failed to parse cursor position response");
    SHU_Assert(sscanf(cursorPosBuffer + 2, "%d;%d", &row, &col) == 2, "Failed to parse cursor position response");

    *x = col - 1;
    *y = row - 1;
}

void SHU_GetTerminalSize(int *width, int *height)
{
    SHU_Assert(width != NULL && height != NULL, "width and height pointers cannot be NULL");

#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    *width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    *height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
#else
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

    *width = w.ws_col;
    *height = w.ws_row;
#endif
}

void SHU_ClearTerminal(void)
{
    printf("\033[2J\033[H");
    fflush(stdout);
}

void SHU_PutCharacter(int c)
{
    putchar(c);
}

void SHU_PutString(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

#endif

#pragma endregion Shucio Definitions
