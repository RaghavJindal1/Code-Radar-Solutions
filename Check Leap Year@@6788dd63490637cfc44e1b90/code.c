#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int isLeapYear(int n)
{
    if(n % 400 == 0) return 1;
    if(n % 100 == 0) return 0;
    if(n % 4 == 0) return 1;
}
int main() {
  int year;
  scanf("%d", &year);
  if(isLeapYear(n)) printf("Leap Year");
  else printf("Not a Lea[ Year");
  else printf("Not a Leap Year");
}