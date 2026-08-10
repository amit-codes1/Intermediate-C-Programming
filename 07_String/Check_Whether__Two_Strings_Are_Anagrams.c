#include <stdio.h>
#include <string.h>
/*
Write a program to check whether two strings are anagrams of each other.

Example:

String 1: "listen"
String 2: "silent"

Output: Anagram

You can assume that the comparison is case-insensitive.
*/

int main()
{

    char str1[20];
    char str2[20];

    printf("---- Enter two Strings to Check Anagram ---- \n\n");

    printf("Enter First String: ");
    scanf("%s", &str1);

    printf("\n");

    printf("Enter another String: ");
    scanf("%s", &str2);

    printf("\n");

    int freq1[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)str1[i];
        freq1[c]++;
    }

    int freq2[256] = {0};

    for (int i = 0; str2[i] != '\0'; i++)
    {
        unsigned char c = (unsigned char)str2[i];
        freq2[c]++;
    }

    int isAnagram = 1;
    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            printf("Not an Anagram!!");
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
    {
        printf("Both Strings are Anagrams!!");
    }

    return 0;
}