#include <stdio.h>
struct stud
{
  // We cannot encapsulate functions in C
  int sid;
  char name[20];
};
int main()
{
  struct stud s1 = {101, "Kushal"};
  printf("%d %s \n", s1.sid, s1.name);
  return 0;
}