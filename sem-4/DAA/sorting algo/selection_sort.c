#include <stdio.h>
# define SIZE 10

void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int* arr, int n) {

    int min = arr[0];

    for (int i = 0; i < n; i++) {

        for (int j = i; j < n; j++) {

            if (min > arr[j]) {

                min = arr[j];
            }
        }

        swap(&min, &arr[i]);
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

    selection_sort(arr, SIZE);

     printf("sorted array: ");

    for (int i = 0; i < SIZE; i++) {

        printf("%d ", arr[i]);
    }

    return 0;
}   