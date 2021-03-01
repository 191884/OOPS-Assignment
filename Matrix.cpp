#include<iostream>
#include<conio.h>

using namespace std;

  void readmatrix();
  void displaymatrix();
  
  int a;
  int b;
  int arr[10][10];
 
int main()
{
 cout<<"Enter the order of matrix\n";
 cin>>a; cout<<"*"; cin>>b;
 readmatrix();
 displaymatrix();
 getch();
 return (0);
}

void readmatrix()
{
 for(int i=1; i<=a; i++)
 {
  for(int j=1; j<=b; j++)
  {
   cout<<"Arr["<<i<<"]["<<j<<"] : ";
   cin>>arr[i][j];
  }
 }
}

void displaymatrix()
{
    cout<<"The matrix is: \n";
 for(int i=1;i<=a;i++)
 {
  for(int j=1;j<=b;j++)
  {
   cout<<" "<<arr[i][j];
  }
  cout<<endl;
 }
}

