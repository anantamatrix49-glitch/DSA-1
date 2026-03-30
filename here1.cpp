#include <iostream>
using namespace std;
int main (){
    int x,y;
    cout<<"Enter a number x :";
    cin>>x; 
    cout<<"Enter a number y :";
    cin>>y;
    cout<<endl;
    if ((x%2==0) && (y%3==0) && (x%3==0) && (y%2==0) || (x%5==0) &&  (y%5==0))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
        return 0;
}