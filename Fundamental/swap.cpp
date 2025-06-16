#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cout<<"a : "<<a<<endl;
    cin>>b;
    cout<<"b: "<<b<<endl;
    int c=a;
    a=b;
    b=c;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;



    return 0;
}