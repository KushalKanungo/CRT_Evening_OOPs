#include <stdio.h>
struct stud
{
  int sid;
  char name[20];
};
int main()
{
  stud s1 = {101, "Kushal"}; // struct is optional in c++
  printf("%d %s \n", s1.sid, s1.name);
  return 0;
}