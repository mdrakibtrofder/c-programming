#include <stdio.h>
struct Book { 
    char title[50];
    char author_name[50];
    double price;
};
int main() {
    struct Book books[3] = {
        {"C Programming", "Fahim Talha", 350.0},
        {"Data Structures", "Maruf Nishat", 450.0},
        {"Algorithms", "Atika Urmi Monika", 500.0}
    };
    for (int i = 0; i < 3; i++) {
        printf("%s - %s - $%lf\n", 
            books[i].title, books[i].author_name, books[i].price);
    }
    return 0;
}