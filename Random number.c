#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int n;

    // Clear the console screen on Windows
    system("cls");

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number
    n = rand();

    printf("%d\n", n);

    return 0;
}
