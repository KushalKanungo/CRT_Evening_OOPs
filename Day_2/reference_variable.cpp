#include<iostream>
using namespace std;
int main()
{
  int a=20;
  int &b=a; // now b is a reference variable(b have same memory allocated as a)
  int c=a;  // c is ordinary variable
  cout << "a = "<< a << endl;
  cout << "b = "<< b << endl;
  cout << "c = "<< c << endl;

  a=50; // b is also changed because a is changed 
  //If we change reference variable then it will change main variable
  cout << "a = "<< a << endl;
  cout << "b = "<< b << endl;
  cout << "c = "<< c << endl;

    return 0;
}