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



# Random Number Sorting and Binary Search Program

## Overview

This C program generates a specified number of random integers, sorts them using the bubble sort algorithm, and then performs a binary search to find a user-specified integer. The program also measures and prints the time taken to perform these operations.

## Features

- Generates random integers between 1 and 1000.
- Sorts the generated integers using the bubble sort algorithm.
- Performs binary search to find a user-specified integer.
- Measures and prints the time taken for the operations.

## How to Use

1. Compile the program using a C compiler.
2. Run the executable file.
3. Enter the number of elements to generate.
4. The program will generate random numbers, sort them, and ask for a key to search.
5. Enter the key to search for in the sorted array.

## Example

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Program code here
    return 0;
}

