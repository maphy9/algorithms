#include <stdio.h>

void insertSort(int *arr, int size);

int main() {
    int arr[] = {31, 41, 59, 26, 41, 58};

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertSort(arr, sizeof(arr) / sizeof(arr[0]));
    
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void insertSort(int *arr, int size) {
    for(int i = 1; i < size; i++) {
        int val = arr[i];
        int k = i - 1;

        while(k >= 0 && arr[k] > val) {
            arr[k + 1] = arr[k];
            k--;
        }
        arr[k + 1] = val;
    }
}
