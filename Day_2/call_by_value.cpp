#include<iostream>
using namespace std;
int add(int , int);

int main()
{ 
  int a, b, c;
    cout << "Enter two numbers - ";
    cin >> a>> b;
    c = add(a,b);  // actual arguments (call by value)
    cout << "Answer is : "<< c << endl;
    return 0;
}

int add(int x, int y) // formal arguments
{
  return x+y;
}