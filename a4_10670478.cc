#include<iostream>
using namespace std;
int gcd(int a, int b)
{
if((a>=b)&&((a%b)==0))
return(b);
else
gcd(b,(a%b));
}
int main()
{
int a,b,result;
cout<<"Enter first positive number"<<endl;
cin>>a;
cout<<"Enter second positive number"<<endl;
cin>>b;
result=gcd(a,b);
cout<<"GCD of " << a << "and" << b << "is" <<result<<endl;
return 0;
}
