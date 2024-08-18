#include<iostream>
using namespace std;
void countsort(int a[],int n){
    int l=a[0];
    for(int i=0;i<n;i++){
        l=max(l,a[i]);
    }
    int countt[10]={0};
    for(int i=0;i<n;i++){
        countt[a[i]]++;
    }
    for(int i=1;i<=l;i++){
        countt[i]+=countt[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--countt[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=output[i];
    }
}
int main(){
    int a[]={1,3,2,3,4,1,6,4,3};
    countsort(a,9);
    for(int i=0;i<9;i++){
        cout<<a[i];
    }
    return 0;
}
