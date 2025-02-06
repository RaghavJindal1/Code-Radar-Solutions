#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c", &ch);
    switch (op)
      {
      case '+':
            printf("sum of a and b is: %.2f\n", a + b);
            break;
      case '-':
            printf("difference of a and b is: %.2f\n", a - b);
            break;
      case '*':
            printf("product of a and b is: %.2f\n",a * b);
            break;
      case '/':
            if(b == 0)
            {
              printf("the ans is undefined or infinity as number is being divided by zero\n");break;
            }
            printf("division of a and b is: %.2f\n", a / b);
            break;
      
      default:
            printf("Error\n");
            break;
      }
    return 0;
}