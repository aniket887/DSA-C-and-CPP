#include<iostream>
using namespace std;
void ascend(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int a[] = {3, 7, 1, 5, 4, 6,2};
    ascend(a,7);
    return 0;
}
