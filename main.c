#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];

    printf("Enter your name: \n");
    scanf("%s", firstName);

    printf("Enter your last name: \n");
    scanf("%s", lastName);

    printf("Your name and lastname is: %s %s\n", firstName, lastName);

    return 0;
}