/*

void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *))

void *base : void pointer to the array.

size_t num : The array element number.

size_t width The element size.

int (*compare (const void *, const void *) : function pointer composed of two arguments and returns 0 when the arguments have the same value, <0 when arg1 comes before arg2, and >0 when arg1 comes after arg2.
The following program sorts an integers array from small to big number using qsort() function:

*/

#include <stdio.h>
#include <stdlib.h>
int compare (const void *, const void *);
int main() {
  int arr[5] = {52, 14, 50, 48, 13};
  int num, width, i;
  num = sizeof(arr)/sizeof(arr[0]);
  width = sizeof(arr[0]);
  qsort((void *)arr, num, width, compare);
  for (i = 0; i < 5; i++)
    printf("%d ", arr[ i ]);
  return 0;}

int compare (const void *elem1, const void *elem2) {
  if ((*(int *)elem1) == (*(int *)elem2))  return 0;
  else if ((*(int *)elem1) < (*(int *)elem2)) return -1;
  else return 1;}
