#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int j=0;j<n;j++){
        for(int i=(n-1);i>=0;i--){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}