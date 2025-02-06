#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch; int a,b;
    scanf("%d %d %c", &a, &b, &ch);
    switch (ch)
      {
      case '+':
            printf("%.2f\n", a + b);
            break;
      case '-':
            printf("%.2f\n", a - b);
            break;
      case '*':
            printf(" %.2f\n",a * b);
            break;
      case '/':
            if(b == 0)
            {
              printf("the ans is undefined or infinity as number is being divided by zero\n");break;
            }
            printf("%.2f\n", a / b);
            break;
      
      default:
            printf("Error\n");
            break;
      }
    return 0;
}