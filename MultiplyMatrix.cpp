#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"enter row and column of first matrix:";
    cin>>r1>>c1;
    int m1[r1][c1];
    cout<<"enter elements\n";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"enter element "<<i+1<<j+1<<":";
            cin>>m1[i][j];
        }
    }
    cout<<"enter row and column of second matrix:";
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"cant multiply this matrix, jake pehle matrix pdh ke aa laaude, pas kaise hua be 12th mai4";
        return 0;
    }
    int m2[r2][c2];
    cout<<"enter elements\n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"enter element "<<i+1<<j+1<<":";
            cin>>m2[i][j];
        }
    }
    int m3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            m3[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){  //c1 & r2 same
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

