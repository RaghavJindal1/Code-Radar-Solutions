#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char ch;
   scanf("%c", &ch);
   if(ch >='a' && ch <='z') printf("Lowercase");
   else if(ch >='A' && ch<='Z') printf("Uppercase");
   else printf("Not an alphabet");
    return 0;
}