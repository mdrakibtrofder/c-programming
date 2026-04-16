#include <stdio.h>
int main() {
    int num1;
    printf("Enter first number: ");
    scanf("%d", &num1);
    int num2;
    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 >= 18 && num2 >= 18) {
        printf("Both numbers are greater or equal than 18.\n");
    } else if(num1<18 && num2<18) {
        printf("Both numbers are less than 18.\n");
    }
    else{
        printf("One number is greater or equal than 18 and another number is less than 18");
    }

    return 0;
}