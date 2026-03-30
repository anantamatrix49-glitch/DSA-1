#include<iostream>
using namespace std;
int main(){
    int n,t;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"enter a number";
    cin>>t;
    cout<<"the sum of "<<n<<" and "<<t<<" is "<<n+t<<endl;
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial=factorial*i;
    }
    cout<<"Factorial of "<<n<<" is "<<factorial; 
 return 0;
}