#include <stdio.h>

int isLeapYear(int n)
{
    if(n % 400 == 0) return 1;
    if(n % 100 == 0) return 0;
    if(n % 4 == 0) return 1;
}
int main() {
  int year;
  scanf("%d", &year);
  if(isLeapYear(year)) printf("Leap Year");
  else printf("Not a Leap Year");

}