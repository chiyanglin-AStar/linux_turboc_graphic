
#include <stdio.h>
int * build_array();
int main() {
  int *a;
  a = build_array(); /* get first 5 even numbers */
  for (k = 0; k < 5; k++)
    printf("%d\n", a[k]);
  return 0;
}
int * build_array() {
  static int Tab[5]={1,2,3,4,5};
   return (Tab);
}
