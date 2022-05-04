#include <iostream>

class Employee
{
  int eid;
  char name[20];
  static char cname[20];
};
int main()
{
  Employee e1, e2;
  e1.eid = 101;
  strcpy(e1.name, "Amit");
  strcpy(e1.cname, "HP");

  e2.eid = 102;
  strcpy(e1.name, "Ajay");
  strcpy(e1.cname, "HP");
  cout << "EID   ENAME   COMPANY" << endl;
  cout << "=====================" << endl;
  cout << e1.eid << "  " << e1.name << "  " << e1.cname;
  cout << e2.eid << "  " << e2.name << "  " << e2.cname;
}
