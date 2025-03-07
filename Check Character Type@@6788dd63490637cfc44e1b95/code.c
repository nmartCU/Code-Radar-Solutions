// Your code here...
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ERROR 1
#define SUCCESS 0

int main(int argc, char *const argv[])
{
    char c = 0;
    if ((scanf("%c \n", &c)) != 1)
        return ERROR;
    char lower = tolower(c);
    bool isVowel = (isalpha(lower) && (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u' || lower_ch == 'y' ));
    bool isConsonant = (isalpha(lower) && !isVowel);
    if ((printf("%s\n", (isVowel ? "Vowel" : isConsonant ? "Consonant" : isdigit(c) ? "Digit" : "Special Character"))) < 0)
        return ERROR;
    return SUCCESS;
}