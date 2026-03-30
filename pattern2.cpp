#include<iostream>
using namespace std;
int main(){
  
    for(int i=1; i<=9; i++){
        for (int j=1; j<=9; j++){
            if(i==9 || j==9 || i+j>=10 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    }
}