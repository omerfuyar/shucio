#pragma once

#pragma region Shucio Macros

#define SHU_SEQUENCE_BUFFER_SIZE 8
#define SHU_STRING_BUFFER_SIZE 32

#pragma endregion Shucio Macros

#pragma region Shucio Declarations

typedef enum SHUKey
{
    SHUKey_Invalid = 0,

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

// Select alternate font n-10
#define SHUAttribute_AlternateFont(n) (10 + (n)) // n is between 1 and 9

/*
Set foreground color from one of 256 pre-selected colors. Not widely supported. n is between 0 and 255.
0x00-0x07	standard colors (same as the 4-bit colors)
0x08-0x0F	high intensity colors
0x10-0xE7	6 × 6 × 6 cube (216 colors): 16 + 36 × r + 6 × g + b (0 ≤ r, g, b ≤ 5)
0xE8-0xFF	grayscale from black to white in 24 steps
*/
#define SHUAttribute_ColorFG8(n) ((unsigned int)38 << 8 | (unsigned int)(n))

/*
Set background color from one of 256 pre-selected colors. Not widely supported. n is between 0 and 255.
0x00-0x07	standard colors (same as the 4-bit colors)
0x08-0x0F	high intensity colors
0x10-0xE7	6 × 6 × 6 cube (216 colors): 16 + 36 × r + 6 × g + b (0 ≤ r, g, b ≤ 5)
0xE8-0xFF	grayscale from black to white in 24 steps
*/
#define SHUAttribute_ColorBG8(n) ((unsigned int)48 << 8 | (unsigned int)(n))

#define SHU_COLOR_8BIT_START (SHUAttribute_ColorFG8(0))
#define SHU_COLOR_8BIT_END (SHUAttribute_ColorBG8(255))

// Set RGB foreground color. Not widely supported. r, g, b are between 0 and 255.
#define SHUAttribute_ColorFG24(r, g, b) ((unsigned int)38 << 24 | (unsigned int)(r) << 16 | (unsigned int)(g) << 8 | (unsigned int)(b))
// Set RGB background color. Not widely supported. r, g, b are between 0 and 255.
#define SHUAttribute_ColorBG24(r, g, b) ((unsigned int)48 << 24 | (unsigned int)(r) << 16 | (unsigned int)(g) << 8 | (unsigned int)(b))

#define SHU_COLOR_24BIT_START (SHUAttribute_ColorFG24(0, 0, 0))
#define SHU_COLOR_24BIT_END (SHUAttribute_ColorBG24(255, 255, 255))

typedef enum SHUAttribute
{
    SHUAttribute_Reset = 0, // all attributes off

    SHUAttribute_Bold = 1,   // Bold or increased intensity
    SHUAttribute_Faint = 2,  // Not widely supported.
    SHUAttribute_Italic = 3, // Not widely supported. Sometimes treated as inverse.
    SHUAttribute_Underline = 4,
    SHUAttribute_SlowBlink = 5,  // less than 150 per minute
    SHUAttribute_RapidBlink = 6, // MS-DOS ANSI.SYS; 150+ per minute; not widely supported
    SHUAttribute_Reverse = 7,    // swap foreground and background colors
    SHUAttribute_Conceal = 8,    // Not widely supported.
    SHUAttribute_CrossedOut = 9, // Characters legible, but marked for deletion. Not widely supported.

    SHUAttribute_PrimaryFont = 10,

    SHUAttribute_Fraktur = 20,     // hardly ever supported
    SHUAttribute_BoldOff = 21,     // Bold off or Double Underline
    SHUAttribute_NormalColor = 22, // Neither bold nor faint
    SHUAttribute_NotItalicNotFraktur = 23,
    SHUAttribute_UnderlineOff = 24, // Not singly or doubly underlined
    SHUAttribute_BlinkOff = 25,
    SHUAttribute_InverseOff = 27,
    SHUAttribute_Reveal = 28, // conceal off
    SHUAttribute_NotCrossedOut = 29,

    // Set foreground color
    SHUAttribute_ColorFGBlack = 30,
    SHUAttribute_ColorFGRed = 31,
    SHUAttribute_ColorFGGreen = 32,
    SHUAttribute_ColorFGYellow = 33,
    SHUAttribute_ColorFGBlue = 34,
    SHUAttribute_ColorFGMagenta = 35,
    SHUAttribute_ColorFGCyan = 36,
    SHUAttribute_ColorFGWhite = 37,
    SHUAttribute_ColorFGDefault = 39, // implementation defined (according to standard)

    // Set background color
    SHUAttribute_ColorBGBlack = 40,
    SHUAttribute_ColorBGRed = 41,
    SHUAttribute_ColorBGGreen = 42,
    SHUAttribute_ColorBGYellow = 43,
    SHUAttribute_ColorBGBlue = 44,
    SHUAttribute_ColorBGMagenta = 45,
    SHUAttribute_ColorBGCyan = 46,
    SHUAttribute_ColorBGWhite = 47,
    SHUAttribute_ColorBGDefault = 49, // implementation defined (according to standard)

    SHUAttribute_Framed = 51,
    SHUAttribute_Encircled = 52,
    SHUAttribute_Overlined = 53,
    SHUAttribute_NotFramedOrEncircled = 54,
    SHUAttribute_NotOverlined = 55,

    SHUAttribute_IdeogramUnderline = 60,       // hardly ever supported
    SHUAttribute_IdeogramDoubleUnderline = 61, // hardly ever supported
    SHUAttribute_IdeogramOverline = 62,        // hardly ever supported
    SHUAttribute_IdeogramDoubleOverline = 63,  // hardly ever supported
    SHUAttribute_IdeogramStressMarking = 64,   // hardly ever supported
    SHUAttribute_IdeogramAttributesOff = 65,   // reset the effects of all of 60-64

    // Set bright foreground color. aixterm (not in standard)
    SHUAttribute_ColorBrightFGBlack = 90,
    SHUAttribute_ColorBrightFGRed = 91,
    SHUAttribute_ColorBrightFGGreen = 92,
    SHUAttribute_ColorBrightFGYellow = 93,
    SHUAttribute_ColorBrightFGBlue = 94,
    SHUAttribute_ColorBrightFGMagenta = 95,
    SHUAttribute_ColorBrightFGCyan = 96,
    SHUAttribute_ColorBrightFGWhite = 97,

    // Set bright background color. aixterm (not in standard)
    SHUAttribute_ColorBrightBGBlack = 100,
    SHUAttribute_ColorBrightBGRed = 101,
    SHUAttribute_ColorBrightBGGreen = 102,
    SHUAttribute_ColorBrightBGYellow = 103,
    SHUAttribute_ColorBrightBGBlue = 104,
    SHUAttribute_ColorBrightBGMagenta = 105,
    SHUAttribute_ColorBrightBGCyan = 106,
    SHUAttribute_ColorBrightBGWhite = 107,

    SHUAttribute_Invalid, //!!! not meant for use !!!
} SHUAttribute;

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

///!!! This function is not meant to be used directly. Use SHU_SetAttributes macro instead. !!!
void SHU_SetAttribute(SHUAttribute attribute, ...);

/// @brief Sets the specified set of attributes for text output.
/// @param attributes Attributes to set. Must be used with SHUAttribute enum. You can also pass multiple attributes by using the variadic arguments.
#define SHU_SetAttributes(attribute, ...) SHU_SetAttribute(attribute, ##__VA_ARGS__, SHUAttribute_Invalid)

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
int SHU_PutString(const char *format, ...);

/// @brief Flushes the output buffer so anything that was buffered will be written to the terminal immediately.
void SHU_Flush(void);

#pragma endregion Shucio Declarations

#pragma region Shucio Definitions

#ifdef SHUCIO_IMPLEMENTATION

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#ifdef _WIN32
#include <windows.h>
#include <conio.h>

static DWORD SHUI_CONSOLE_MODE_RESTORE;
#else
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>

static struct termios SHUI_TERMIOS_RESTORE;
#endif

void (*SHUI_AT_EXIT_FUNCTION)(void) = NULL;

static void SHUI_AT_EXIT(void)
{
    if (SHUI_AT_EXIT_FUNCTION != NULL)
    {
        SHUI_AT_EXIT_FUNCTION();
    }
}

#define SHUI_Assert(condition, str, ...)                                                                              \
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
    SHUI_AT_EXIT_FUNCTION = SHU_Terminate;
    atexit(SHUI_AT_EXIT);

#ifdef _WIN32
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleMode(hOut, &SHUI_CONSOLE_MODE_RESTORE);

    DWORD dwMode = SHUI_CONSOLE_MODE_RESTORE;
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
#else
    tcgetattr(STDIN_FILENO, &SHUI_TERMIOS_RESTORE);

    struct termios rawTermios = SHUI_TERMIOS_RESTORE;

    rawTermios.c_lflag &= ~((tcflag_t)ECHO | (tcflag_t)ICANON);
    rawTermios.c_cc[VMIN] = 1;
    rawTermios.c_cc[VTIME] = 0;

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &rawTermios);
#endif
}

void SHU_Terminate(void)
{
    SHUI_AT_EXIT_FUNCTION = NULL;

    SHU_SetCursorVisibility(1);
    SHU_SetAttributes(SHUAttribute_Reset);
    SHU_SetTerminalAlternate(0);

#ifdef _WIN32
    SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), SHUI_CONSOLE_MODE_RESTORE);
#else
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &SHUI_TERMIOS_RESTORE);
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
    SHUI_Assert(buffer != NULL, "Buffer cannot be NULL");
    SHUI_Assert(bufferSize > 0, "BufferSize must be greater than 0");

    SHU_SetCursorVisibility(1);

    unsigned long long index = 0;

    while (1)
    {
        SHUKey key = SHU_Key();

        if (key == SHUKey_Enter)
        {
            // printf("\n");
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
    va_list args;
    va_start(args, attribute);

    unsigned int nextAttribute = attribute;
    while (nextAttribute != SHUAttribute_Invalid)
    {
        if (nextAttribute < SHUAttribute_Invalid)
        {
            printf("\033[%dm", nextAttribute);
        }
        else if (nextAttribute >= SHU_COLOR_8BIT_START && nextAttribute <= SHU_COLOR_8BIT_END)
        {
            unsigned char colorType = (unsigned char)((nextAttribute >> 8) & 0xFF);
            unsigned char colorValue = (unsigned char)(nextAttribute & 0xFF);
            printf("\033[%d;5;%dm", colorType, colorValue);
        }
        else if (nextAttribute >= SHU_COLOR_24BIT_START && nextAttribute <= SHU_COLOR_24BIT_END)
        {
            unsigned char colorType = (unsigned char)((nextAttribute >> 24) & 0xFF);
            unsigned char colorR = (unsigned char)((nextAttribute >> 16) & 0xFF);
            unsigned char colorG = (unsigned char)((nextAttribute >> 8) & 0xFF);
            unsigned char colorB = (unsigned char)(nextAttribute & 0xFF);
            printf("\033[%d;2;%d;%d;%dm", colorType, colorR, colorG, colorB);
        }
        else
        {
            SHUI_Assert(0, "Invalid attribute: %d", nextAttribute);
        }

        nextAttribute = va_arg(args, unsigned int);
    }

    va_end(args);
}

void SHU_GetCursorPosition(int *x, int *y)
{
    SHUI_Assert(x != NULL && y != NULL, "x and y pointers cannot be NULL");

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

    SHUI_Assert(cursorPosBuffer[0] == '\x1b' && cursorPosBuffer[1] == '[', "Failed to parse cursor position response");
    SHUI_Assert(sscanf(cursorPosBuffer + 2, "%d;%d", &row, &col) == 2, "Failed to parse cursor position response");

    *x = col - 1;
    *y = row - 1;
}

void SHU_GetTerminalSize(int *width, int *height)
{
    SHUI_Assert(width != NULL && height != NULL, "width and height pointers cannot be NULL");

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
    fflush(stdout);
}

int SHU_PutString(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);

    return result;
}

void SHU_Flush(void)
{
    fflush(stdout);
}

#endif

#pragma endregion Shucio Definitions
