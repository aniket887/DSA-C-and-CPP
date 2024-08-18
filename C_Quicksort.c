#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void quick(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[(low + high) / 2];
        int i = low;
        int j = high;
        int temp;
        while (i <= j) {
            while (arr[i] < pivot) i++; 
            while (arr[j] > pivot) j--; 
            if (i <= j) {
                temp = arr[i];  
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
        if (low < j) quick(arr, low, j);
        if (i < high) quick(arr, i, high);
    }
}
void printt(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
int main() {
    int a[] = {3, 7, 1, 5, 4, 6,2};
    
    quick(a, 0,6);
    printt(a,7);
    return 0;
}