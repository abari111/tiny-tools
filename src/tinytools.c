#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "tinytools.h"

// Word Counter
void count_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Unable to open file: %s\n", filename);
        return;
    }

    int lines = 0, words = 0, characters = 0;
    int in_word = 0;
    char c;

    while ((c = fgetc(file)) != EOF) {
        characters++;
        if (c == '\n') lines++;
        if (isspace(c)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(file);

    printf("File: %s\n", filename);
    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
}

// Temperature Converter
void celsius_to_fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
}

void fahrenheit_to_celsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
}

// Stopwatch
void stopwatch() {
    printf("Press Enter to start...\n");
    getchar();  // Wait for enter

    clock_t start_time = clock();

    printf("Stopwatch started! Press Enter to stop...\n");
    getchar();  // Wait for enter again

    clock_t end_time = clock();

    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Elapsed time: %.2f seconds\n", elapsed_time);
}

// Random Password Generator
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

// Basic Calculator
void add(double a, double b) {
    printf("Result: %.2f\n", a + b);
}

void subtract(double a, double b) {
    printf("Result: %.2f\n", a - b);
}

void multiply(double a, double b) {
    printf("Result: %.2f\n", a * b);
}

void divide(double a, double b) {
    if (b != 0)
        printf("Result: %.2f\n", a / b);
    else
        printf("Cannot divide by zero!\n");
}
