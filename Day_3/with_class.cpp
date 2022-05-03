#include <iostream>
using namespace std;
class ADD
{

  int a, b, c; // data  by default they are private

public: // we explicitly defining function as private
  void input()
  {
    cout << "Enter two numbers";
    cin >> a >> b;
  }

  void process()
  {
    c = a + b;
  }

  void output()
  {
    cout << "Sum =  " << c << endl;
  }
};
int main()
{
  ADD obj; // obj is the object of class ADD
  obj.input();
  obj.process();
  obj.output();
  return 0;
}