#include <stdio.h>
# define SIZE 10

void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int* arr, int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n-1; j++) {

            if (arr[j] > arr[j+1]) {

                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {

    int arr[SIZE];

    printf("Enter the unsorted array: \n");

    for (int i = 0; i < SIZE; i++) {

        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }

    printf("unsorted array: ");

    for (int i = 0; i < SIZE; i++) {

        printf("%d ", arr[i]);
    }

    printf("\n");

    bubble_sort(arr, SIZE);

     printf("sorted array: ");

    for (int i = 0; i < SIZE; i++) {

        printf("%d ", arr[i]);
    }

    return 0;
}   