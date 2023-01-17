#include <stdio.h>
#define SIZE 5

// Linear Search
int linear_search(int* arr, int n, int item) {


    for (int i = 0; i < n; i++) {

        if (arr[i] == item) {

            return 1;
        }
    }

    return 0;
}

int main() {

    int arr[SIZE], flag = 0, item = 0;
    
    // input from user
    for (int i = 0; i < SIZE; i++) {

        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Item = ");
    scanf("%d", &item);

    flag = linear_search(arr, SIZE, item);

    if (flag == 1) {

        printf("Item is in the list!\n");
    }
    else {

        printf("Item is not in the list!\n");
    }

    return 0;






}