/**
Write a C program to take product ID, quantity, and price per unit as input and print:
Product ID X, Quantity Y, Price per unit Z.
**/
#include <stdio.h>
int main() {
    int id, qty;
    double price;
    printf("Enter product ID, quantity, price: ");
    scanf("%d %d %lf", &id, &qty, &price);

    printf("Product ID %d, Quantity %d, Price per unit %.2lf.\n", id, qty, price);
    return 0;
}