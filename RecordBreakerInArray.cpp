#include<climits>
#include<iostream>
using namespace std;
void recordbreak(int arr[],int n){
     arr[n]=-1;
     if(n==1){
         cout<<"1"<<endl;
     }
     int ans=0;
     int mx=-1;
     for(int i=0;i<n;i++){
         if(arr[i]>mx && arr[i]>arr[i+1]){
             ans++;
             cout<<"record break at day:"<<i+1<<endl;
         }
         mx=max(mx,arr[i]);
     }
     cout<<"record breaks total of "<<ans<<" times."<<endl;
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recordbreak(arr,n);
    return 0;
}

