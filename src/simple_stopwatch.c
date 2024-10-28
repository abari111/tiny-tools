#include <stdio.h>
#include <time.h>

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

int main() {
    stopwatch();
    return 0;
}
