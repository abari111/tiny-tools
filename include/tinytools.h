#ifndef TINYTOOLS_H
#define TINYTOOLS_H

// Word Counter
void count_file(const char *filename);

// Temperature Converter
void celsius_to_fahrenheit(float celsius);
void fahrenheit_to_celsius(float fahrenheit);

// Stopwatch
void stopwatch();

// Random Password Generator
void generate_password(int length);

// Basic Calculator
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

#endif // TINYTOOLS_H
