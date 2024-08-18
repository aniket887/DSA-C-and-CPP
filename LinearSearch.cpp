#include<iostream>
using namespace std;
void lsrch(int arr[],int n,int a){
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            cout<<a<<" present at place:"<<i+1<<endl;
        }
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
    cout<<"which element u finding:";
    cin>>a;
    lsrch(arr,n,a);
    return 0;
}
