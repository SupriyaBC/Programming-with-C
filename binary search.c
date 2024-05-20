#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, n, random, temp, low, mid, high, array[100], key;
    double timespent;
    clock_t start, end;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    high = n - 1; // Set high after reading n

    printf("Generating %d random numbers between 0 to 1000:\n", n);
    start = clock();

    for (i = 0; i < n; i++) {
        random = rand() % 1000 + 1;
        printf("%d\n", random);
        array[i] = random;
    }

    // Bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == key) {
            printf("The key is found at position %d\n", mid + 1);
            break;
        } else if (array[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (low > high) {
        printf("Key not found\n");
    }

    end = clock();
    timespent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time spent: %f seconds\n", timespent);

    return 0;
}
