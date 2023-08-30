#include <stdio.h>

void quickSort(int *arr, int left, int right);

int main() {
    int arr[] = {29, -3, 25, -13, -2, -14, 7, -6, 9, 21, -28, 17, 28, -17, 10, -11, -10, 3, -26, 30};

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1);

    for(int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void quickSort(int *arr, int left, int right) {
    int el = arr[left];
    int i = left + 1, k = left + 1;

    while(k <= right) {
        while(arr[k] > el) {k++;}
        if(k <= right) {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            i++;
            k++;
        }
    }

    arr[left] = arr[i - 1];
    arr[i - 1] = el;

    if(i - 2> left) {
        quickSort(arr, left, i - 2);
    }
    if(i < right) {
        quickSort(arr, i, right);
    }
}