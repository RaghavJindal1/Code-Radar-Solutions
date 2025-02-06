#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int month;
    scanf("%d", &month);
    if(month >=1 && month <=12)
    {
        if(month == 2) printf("28");
        else if(month % 2 == 0) printf("30");
        else printf("31");
    }
    else printf("Invalid month");
    return 0;
}