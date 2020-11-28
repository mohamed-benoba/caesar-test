#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    // if user put more than one command-line argument the program will fail
    if(!(argc == 2))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // if the user put a negative number or not a number the program will fail
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // The program will start from here
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");
    int n = strlen(plaintext);
    char ciphertext[n];
    for(int i = 0; i < n; i++)
    {
        if(!isalpha(plaintext[i]))
        {
            ciphertext[i] = plaintext[i];
        }
        else
        {
            ciphertext[i] = plaintext[i] + key;
        }

    }
    printf("ciphertext: %s\n", ciphertext);
}
