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
            printf("%d", a + b);
            break;
      case '-':
            printf("%d", a - b);
            break;
      case '*':
            printf(" %d",a * b);
            break;
      case '/':
            if(b == 0)
            {
              printf("error");break;
            }
            printf("%d", a / b);
            break;
      
      default:
            printf("Error\n");
            break;
      }
    return 0;
}