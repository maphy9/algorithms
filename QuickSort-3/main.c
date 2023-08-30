#include <stdio.h>

void quickSort(int *arr, int left, int right);

int main() {
    int arr[] = {-14, -21, -4, 27, 20, 2, 29, -13, 19, 16, -29, 12, 18, -22, -7, -16, 24, -30, -15, 10};

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);

    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }   
    printf("\n");

    return 0;
}

void quickSort(int *arr, int left, int right) {
    int el = arr[right];  // last element of an array
    int i = left, k = left;

    while(k <= right - 1) {
        while(arr[k] > el) {k++;}
        if(k <= right - 1) {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            i++;
            k++;
        }
    }

    arr[right] = arr[i];
    arr[i] = el;

    if(left < i) {quickSort(arr, left, i - 1);}
    if(i + 1 < right) {quickSort(arr, i + 1, right);}
}