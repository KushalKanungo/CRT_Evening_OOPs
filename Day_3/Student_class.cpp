#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
  int secret = 10;
  int std_id;
  char s_name[20];
  int marks;
  char gender;

public:
  void get()
  {
    cout << "Std _ID : " << std_id << endl;
    cout << "Std Name : " << s_name << endl;
    cout << "Marks : " << marks << endl;
    // cout << "Gender : " << gender << endl;
  }

  void set()
  {
    cout << "Enter id, name, marks" << endl;
    cin >> std_id >> s_name >> marks;
    // student s1;
    // std_id = 101;
    // marks = 87;
    // s1.s_name = "Kushal";   error lvalue required
    // strcpy(s_name, "Kushal");
    // gender = 'M';
  }
};

int main()
{
  student s1, s2;
  s1.set();
  s1.get();
  s2.set();
  s2.get();
  return 0;
}
