#include<iostream>
using namespace std;

int main()
{
    int n, revno, rem;
    cout<<"hey dear,Enter an integer";
    cin>>n;

    while(n!=0){
        rem=n%10;
        revno=revno*10+rem;
        n/=10;

    }
    cout<<"Reversed num="<<revno;

    return 0;
}
