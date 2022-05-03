#include<iostream>
using namespace std;
int add(int * , int *);

int main()
{ 
  int a, b, c;
    cout << "Enter two numbers - ";
    cin >> a>> b;
    c = add(&a, &b);  // actual arguments (call by address)
    cout << "Answer is : "<< c << endl;
    return 0;
}

int add(int *x, int *y) // formal arguments (pointer x and y)
{
  return *x + *y;
}

/* 
pointer takes same memory space regardless of data type in call by address
and also changes will reflect to main varibles through pointers *x and  *y

In call by value -->
 takes more space
 and x and y are the copies of a & b(arguments) so any change in x and y will
 not reflect on a & b

*/