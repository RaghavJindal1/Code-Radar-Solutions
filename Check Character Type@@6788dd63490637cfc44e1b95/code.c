#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%d",&ch);
      if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check for vowels (both uppercase and lowercase)
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || 
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    }
    // Check if the character is a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // If the character is neither a letter nor a digit, it's a special character
    else {
        printf("Special Character");
    }
    return 0;
}