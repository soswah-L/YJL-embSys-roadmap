#include <stdio.h>

int main ()
{
    char charLetter, charSymbol, charASCII,
    escChar, escOct, escHex;

    charLetter = 'A';
    charSymbol = '*';
    charASCII = 65;

    escChar = '\''; /* Escape characters */
    escChar = '\\';

    escOct = '\47';

    escHex = '\x27';

    printf("%c \n\a", escChar);
    printf("%c", escOct);
    printf("%c", escHex);

    char Char;
    Char = 'A';
    Char += 32;
    Char -= ' ';
    printf("%c \n", Char);

    Char = 'A' + 32;
        printf("%c \n", Char);
    Char = 'A' + ' ' ;
        printf("%c \n", Char);
    Char = 65 + ' ';
        printf("%c \n", Char);
    Char = 97 - ' ';
        printf("%c \n", Char);
    Char = 'a' - 32;
        printf("%c \n", Char);
    Char = 'a' - ' ';
        printf("%c \n", Char);

    return 0;

}