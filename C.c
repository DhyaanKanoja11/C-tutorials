#include <stdio.h>


//WAP to swap two numbers using no third variable

int main() {
    int a, b;
    printf("Enter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);
    printf("a=%d b=%d\n", a, b);
    a = a + b;//(a=7,b=5) a=12
    b = a - b;//(a=12,b=5) b=7
    a = a - b;//(a=12,b=7) a=5
    printf("a=%d b=%d\n", a, b);
    return 0;
}