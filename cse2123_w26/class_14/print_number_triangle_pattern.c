#include<stdio.h>
int main() {
    int n;
    int i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
             if(i<=j) {
                printf("%d ",j);
             }
        }
        printf("\n");
    }
    return 0;
}
