#include <iostream>
using namespace std;

void print(double r) {
cout<<"The output will be: "<<r<<endl;
return;
}

float power(int a, int b) {
int result=1;
for(int i=1; i<=b; i++)
result*= a;
print(result);
cout<<"The function used is int.";
return 0;
}
float power(double u, double v) {
float result=1;
for(int i=1; i<=v; i++)
result*= u;
print(result);
cout<<"The function used is double.";
return 0;
}

int main() {
float x, p;
cout<<"Enter the no. :\n";
cin>>x;
cout<<"Enter the exponent or power:\n";
cin>>p;
power(x, p);
return 0;
}

