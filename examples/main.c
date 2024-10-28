#include <stdio.h>
#include "tinytools.h"

int main() {
    // Use the word counter
    count_file("example.txt");

    // Convert temperatures
    celsius_to_fahrenheit(25.0);
    fahrenheit_to_celsius(77.0);

    // Start a stopwatch
    stopwatch();

    // Generate a random password
    generate_password(10);

    // Perform basic calculations
    add(5.5, 4.5);
    subtract(10.0, 3.0);
    multiply(2.5, 2.0);
    divide(10.0, 2.0);

    return 0;
}
