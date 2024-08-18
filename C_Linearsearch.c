#include<stdio.h>
int s(int a[], int n,int k) {
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return i;
        }
    }
    return -1;
}
int main() {
    int a[] = {3, 7, 1, 5, 4, 6,2};
    int x=s(a, 7,4);
    if(x!=-1){
        printf("position %d",x+1);
    }
    return 0;
}
