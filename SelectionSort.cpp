#include<iostream>
using namespace std;
void ascend(int arr[],int n){
    int t;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }
    cout<<"array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
void descend(int arr[],int n){
    int t;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    cout<<"array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
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
    cout<<"dfghj"<<endl;
    descend(arr,n);
    return 0;
}
