#include <stdio.h>
void squareArea(){
    printf("Area =%d", n*n);
}

void squareVolume(){
    printf("Volume =%d", n*n*n);
}
int main() {
    int n;
    scanf("%d",&n);
    squareArea(n);
    squareVolume(n);    
    
    return 0;
}