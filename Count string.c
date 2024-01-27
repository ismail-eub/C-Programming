#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], ch;
    int i, vowel, consonant, digit, word, other;
    int Sum=0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);          //gets(str);

    i = vowel = consonant = digit = word = other = 0;

    while ((ch = str[i]) != '\0')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowel++;

        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            consonant++;

        else if (ch >= '0' && ch <= '9')
        {
            digit++;
            Sum += ch - '0';        // Convert character to integer and add to digitSum
        }

        else if (ch == ' ' || ch == '\t' || ch == '\n')
            word++;

        else
            other++;

        i++;
    }
    //word++;

    printf("Number of vowel = %d\n", vowel);
    printf("Number of consonant = %d\n", consonant);
    printf("Number of words = %d\n", word);
    printf("Number of digit = %d\n", digit);
     printf("Sum of digits = %d\n", Sum);
    printf("Number of other = %d\n", other);

    return 0;
}
