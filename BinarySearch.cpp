#include<iostream>
using namespace std;
void ascend(int arr[],int n){
    int t;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    cout<<"your array in sorted form :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int bsrch(int arr[],int n,int a){
    ascend(arr,n);
    int s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==a){
            return mid;
        }
        else if(arr[mid]>a){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
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
    cout<<"which element u finding:";
    cin>>a;
    cout<<"element present at indexing:"<<bsrch(arr,n,a);
    return 0;
}
