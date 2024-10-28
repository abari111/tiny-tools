#include <stdio.h>
#include <string.h>
#include "tinytools.h"

// Test function for the word counter
void test_count_file() {
    printf("Testing count_file...\n");
    // Test a known file for expected output
    // Here, create a file "test.txt" with known content
    count_file("test.txt"); // Manually check output for lines, words, chars
}

// Test function for temperature conversion
void test_temperature_conversion() {
    printf("Testing temperature conversions...\n");

    float celsius = 25.0;
    float fahrenheit = 77.0;

    printf("Converting Celsius to Fahrenheit:\n");
    celsius_to_fahrenheit(celsius); // Expected output: 77.0

    printf("Converting Fahrenheit to Celsius:\n");
    fahrenheit_to_celsius(fahrenheit); // Expected output: 25.0
}

// Test function for the stopwatch
void test_stopwatch() {
    printf("Testing stopwatch (manual test - check elapsed time)...\n");
    stopwatch();
}

// Test function for the password generator
void test_generate_password() {
    printf("Testing password generation...\n");
    int length = 10;
    printf("Generating password of length %d:\n", length);
    generate_password(length); // Observe output length is as expected
}

// Test function for basic calculator
void test_calculator() {
    printf("Testing calculator functions...\n");

    printf("Adding 5.5 and 4.5:\n");
    add(5.5, 4.5); // Expected output: 10.0

    printf("Subtracting 10.0 and 3.0:\n");
    subtract(10.0, 3.0); // Expected output: 7.0

    printf("Multiplying 2.5 and 2.0:\n");
    multiply(2.5, 2.0); // Expected output: 5.0

    printf("Dividing 10.0 by 2.0:\n");
    divide(10.0, 2.0); // Expected output: 5.0

    printf("Dividing 10.0 by 0.0 (error case):\n");
    divide(10.0, 0.0); // Expected output: "Cannot divide by zero!"
}

int main() {
    printf("Running tests for utils library...\n\n");

    // Run each test function
    test_count_file();
    test_temperature_conversion();
    test_stopwatch();
    test_generate_password();
    test_calculator();

    printf("\nAll tests completed.\n");
    return 0;
}
