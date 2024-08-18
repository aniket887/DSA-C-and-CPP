#include<stdio.h>
int s(int a[], int n,int k) {
    int s=0,e=n-1;
    while(s<=e){
        int m=(s+e)/2;
        if(a[m]==k){
            return m;
        }
        else if(k<a[m]){
            e=m-1;
        }
        else if(k>a[m]){
            s=m+1;
        }
    }
    return -1;
}
int main() {
    int a[] = {1,2,3,4,5,6,7};
    int x=s(a, 7,4);
    if(x!=-1){
        printf("position %d",x+1);
    }
    return 0;
}
