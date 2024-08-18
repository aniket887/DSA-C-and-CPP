#include<climits>
#include<iostream>
using namespace std;
void larithematic(int arr[],int n){
    int curr=2,ans=2,d=arr[1]-arr[0],j=2;
    while(j<n){
        if(arr[j]-arr[j-1]==d){
            curr++;
        }
        else{
            d=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"length of longest sub arithmatic array is:"<<ans<<endl;
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    larithematic(arr,n);
    return 0;
}

