#include<iostream>
using namespace std;
void swap(int a[],int i,int j){
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
void dnfsort(int a[],int n){
    int l=0,m=0,h=n-1;
    while(m<=h){
        if(a[m]==0){
            swap(a,l,m);
            l++;m++;
        }
        else if(a[m]==1){
            m++;
        }
        else{
            swap(a,m,h);
            h--;
        }
    }
}
int main(){
    int a[]={1,0,2,1,0,1,2,1,2};
    dnfsort(a,9);
    for(int i=0;i<9;i++){
        cout<<a[i];
    }
    return 0;
}

