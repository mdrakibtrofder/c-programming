#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char buffer[100];
    fp1 = fopen("players.txt", "r");
    fp2 = fopen("score.txt", "w");
    while (fgets(buffer, 100, fp1) != NULL) {
        fputs(buffer, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Data copied successfully into score.txt");
    return 0;
}