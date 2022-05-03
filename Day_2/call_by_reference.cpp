#include<iostream>
using namespace std;
int add(int & , int &);

int main()
{ 
  int a, b, c;
    cout << "Enter two numbers - ";
    cin >> a>> b;
    c = add(a, b);  // actual arguments (call by refrence)
    cout << "Answer is : "<< c << endl;
    return 0;
}

int add(int &x, int &y) // formal arguments (pointer x and y)
{
  return x + y;
}

// In Call by refrence ---->
/* 
If we change value of x and y it will reflect in a and b
*/
