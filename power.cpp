#include<iostream>
using namespace std;
double power(int, int);
int main()
{
int x, p;
cout<<"Enter the no. :\n";
cin>>x;
cout<<"Enter the exponent or power:\n";
cin>>p;
cout<<"The result is: "<<power(x, p);
return 0;
}

double power( int a, int b)
{ int result=1;
  for(int i=1; i<=b; i++)
  result*= a;
  return result;
  }
