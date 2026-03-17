#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age :";
    cin>>age;
    if  ((age>20 && age<30 && age%5==0))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
    return 0;
}