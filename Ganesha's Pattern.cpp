#include<iostream>
using namespace std ;
int main (){
    int n;
    cin >>n;
    for(int i = 0 ; i < (n+1)/2 -1; i++){
       cout<<"*";
       for(int j = 0 ; j < (n)/2 - 1 ; j++){
         cout<<" ";
       } 
         if( i== 0){
               for(int a = 0 ; a < (n+1)/2 ; a++){
                   cout<<"*";
               }
            }
            else{
               cout<<"*";
            }
        
        cout<<endl;
    }
    for(int i = 0 ; i< n ; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i = 0 ; i < (n+1)/2 -1 ; i++){
        if(i == (n+1)/2 - 2){
         for(int j = 0 ; j < n/2 ; j++){
            cout<<"*";
        }
        }
        else{
        for(int j = 0 ; j < n/2 ; j++){
            cout<<" ";
        }
        }
        cout<<"*";
        for(int j = 0 ; j < (n)/2 - 1 ; j++){
         cout<<" ";
       } 
       cout<<"*"<<endl;

    }

}