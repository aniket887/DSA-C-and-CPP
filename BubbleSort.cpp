#include<iostream>
using namespace std;
void ascend(int arr[],int n){
    int c=1,t;
    while(c<n){
        for(int i=0;i<n-c;i++){
            if(arr[i]>arr[i+1]){
                t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
        c++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void descend(int arr[],int n){
    int t,c=1;
    while(c<n){
        for(int i=0;i<n-c;i++){
            if(arr[i]<arr[i+1]){
                t=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=t;
            }
        }
        c++;
    }
    cout<<"\narray is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int n,a;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ascend(arr,n);
    descend(arr,n);
    printf("\narr[n]=%d",arr[n]);
    return 0;
}
