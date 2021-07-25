#include <iostream>
using namespace std;
int main()
{
int n, reverse=0, rem;
cout<<"Enter a number: ";
cin>>n;
  while(n!=0)
  {
     rem=n%10; //last digit of num
     reverse=reverse*10+rem;   //generate a num from rem as last digit
     n/=10;
  }
 cout<<"Reversed Number: "<<reverse<<endl;
return 0;
}
