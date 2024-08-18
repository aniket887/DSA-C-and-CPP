#include<stdio.h>
void swp(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void printt(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
void bubl(int a[], int n) {
    int c = 1;
    while (c < n) {
        for (int i = 0; i < n - c; i++) {
            if (a[i] > a[i + 1]) {
                swp(&a[i], &a[i + 1]); 
            }
        }
        c++;
    }
    printt(a, 7);
}
int main() {
    int a[] = {3, 7, 1, 5, 4, 6,2};
    bubl(a, 7);
    return 0;
}
