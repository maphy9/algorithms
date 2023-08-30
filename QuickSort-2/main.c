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
    int el = arr[(int) (left + right + 1) / 2];
    int i = left, k = right;

    while(i <= k) {
        while(arr[i] < el) {i++;}
        while(arr[k] > el) {k--;}
        if(i <= k) {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k--;
            i++;
        }
    }

    if(left < k) {
        quickSort(arr, left, k);
    }
    if(i < right) {
        quickSort(arr, i, right);
    }
}