#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18) ? printf("You are eligible to vote") :
    printf("You are not eligible to vote");

    return 0;
}