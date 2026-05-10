#include <stdio.h>

int main() {
    double gpa;

    printf("Enter Your HSC GPA: ");
    scanf("%lf", &gpa);

    if(gpa > 4.75) {
   printf("Your gpa is %lf. You are eligable for scholarship", gpa);
}
    else {
printf("Your gpa is %lf. You are not eligable for scholarship", gpa);
}
    return 0;
}
