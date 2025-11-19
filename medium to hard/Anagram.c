// Given two strings s1 and s2 consisting of lowercase characters, the task is to check whether the two given 
// strings are anagrams of each other or not. An anagram of a string is another string that contains the same 
// characters, only the order of characters can be different. 
// Input: s1 = “geeks” s2 = “kseeg” 
// Output: true 
// Explanation: Both the strings have the same characters with same frequency. So, they are anagrams.

#include <stdio.h>

void main() {
    int freq1[26] = {0}, freq2[26] = {0};
    int size1, size2;

    printf("Enter the size of string 1: ");
    scanf("%d", &size1);
    char s1[size1 + 1];

    printf("Enter string 1: ");
    scanf("%s", s1);

    printf("Enter the size of string 2: ");
    scanf("%d", &size2);
    char s2[size2 + 1];

    printf("Enter string 2: ");
    scanf("%s", s2);

    if (size1 != size2) {
        printf("False (Strings are not anagrams due to different sizes)\n");
        return;
    }

    for (int i = 0; s1[i] != '\0'; i++) {
        freq1[s1[i] - 'a']++;
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        freq2[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("False (Strings are not anagrams)\n");
            return;
        }
    }

    printf("True (Strings are anagrams)\n");
}
