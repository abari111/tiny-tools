#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_password(int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    int charset_size = sizeof(charset) - 1;

    srand(time(NULL));

    printf("Generated password: ");
    for (int i = 0; i < length; i++) {
        printf("%c", charset[rand() % charset_size]);
    }
    printf("\n");
}

int main() {
    int length;

    printf("Enter the desired password length: ");
    scanf("%d", &length);

    generate_password(length);
    return 0;
}
