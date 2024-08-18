#include<stdio.h>
void printt(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
void ins(int a[], int n) {
    for(int i=1;i<n;i++){
        int cur=a[i];
        int j=i-1;
        while(a[j]>cur&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cur;
    }
    printt(a, 7);
}
int main() {
    int a[] = {3, 7, 1, 5, 4, 6,2};
    ins(a, 7);
    return 0;
}
