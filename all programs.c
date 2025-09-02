// Program for Area of Square
#include<stdio.h>

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Area Of Square: %d\n", a*a);
    return 0;
}

// Program for Area of Circle
#include<stdio.h>

int main() {
    float r;
    printf("Enter the Radius of The Circle: ");
    scanf("%f", &r);
    printf("Area Of Circle: %f\n", (3.14)*r*r);
    return 0;
}

// Program for Pass/Fail based on Marks
#include<stdio.h>

int main() {
    int marks;
    printf("Enter the Marks: ");
    scanf("%d", &marks);
    if (marks > 30) {
        printf("You have passed the exam.\n");
    } 
    else {
        printf("You have failed the exam.\n");
    };
    return 0;
}

//Program to Check Uppercase, Lowercase or Not an Alphabet
#include<stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("You entered an uppercase letter.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("You entered a lowercase letter.\n");
    } else {
        printf("Not English.\n");
    }
    return 0;
}

// Program to Calculate Average of Three Numbers
#include<stdio.h>

int main() {
    int a , b, c;
    printf("Enter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);
    printf("Enter Number 3: ");
    scanf("%d", &c);
    printf("The Average is: %d\n", (a+b+c)/3);
    return 0;
}

//WAP to print 0 to n number (using While Loop)
#include<stdio.h>

int main() {
    int n;
    printf("Enter Number 1: ");
    scanf("%d", &n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}

//WAP to print 0 to n number (using Do- While Loop)
#include<stdio.h>

int main() {
    int n;
    printf("Enter Number 1: ");
    scanf("%d", &n);
    int i=0;
    do {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    return 0;
}

// WAP to print Sum of first n Natural Numbers and print numbers in reverse
#include<stdio.h>

int main() {
    int n;
    printf("Enter Number 1: ");
    scanf("%d", &n);
    int i=0;
    int x=0;
    // Using do-while loop to calculate the sum of first n natural numbers
    do {
        x+=i;
        i++;
    } while (i<=n);
    printf("%d\n",x);
    //Using loop to print the numbers in reverse
    for (int j=n; j>=0; j--) {
        printf("%d\n", j);
    }
    return 0;
}

//WAP to take input from user until user enter an odd number
#include<stdio.h>

int main() {
    int n;
    while(n%2==0){
        printf("Enter Number 1: ");
        scanf("%d", &n);
    }
    return 0;
}

//WAP to take input from user until user enter an  number which is multiple of 7
#include<stdio.h>

int main() {
    int n;
    do {
        printf("Enter Number 1: ");
        scanf("%d", &n);
    } while (n % 7 != 0);
    return 0;
}

//WAP to calculate Factorial of a number
#include<stdio.h>

int main() {
    int n;
    printf("Enter Number 1: ");
    scanf("%d", &n);
    int x=1;
    for (int i = 1; i <= n; i++) {
        x *= i;
    }
    printf("%d\n",x);
    return 0;
}

//WAP to calculate Sum of numbers from 5 to 50
#include<stdio.h>

int main() {
    int x=0;
    for (int i = 5; i <= 50; i++) {
        x += i;
    }
    printf("%d\n",x);
    return 0;
}

//WAP to print a rectangle of * using Nested Loop
#include <stdio.h>

int main() {
    int rows = 4;
    int cols = 6;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
//WAP to print all the prime numbers between 1 to n
#include <stdio.h>

int main() {
    //WAP to print all the prime numbers between 1 to n
    int n;
    printf("Enter Number 1: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int flag = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d\n", i);
        }
    }
    return 0;
}

//WAP on how to prototype function define it and use/call it in main function
#include <stdio.h>

void printHello();
void printHello() {
    printf("Hello, World!\n");
}

int main() {
    printHello();
    return 0;
}

//WAP to swap two numbers using a third variable
#include <stdio.h>

int main() {
    int a=7;
    int b=5;
    printf("a=%d b=%d\n",a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d\n",a,b);
    return 0;
}

//WAP to swap two numbers using no third variable
#include <stdio.h>

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