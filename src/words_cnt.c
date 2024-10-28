#include <stdio.h>
#include <ctype.h>

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

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    count_file(argv[1]);
    return 0;
}
