#include<stdio.h>

int sum(int arr[], int size) {
  int incl = arr[0];
  int excl = 0;
  int excl_new = 0;
  for (int i = 1; i < size; i++) {
    excl_new = max(incl, excl);
    incl = excl + arr[i];
    excl = excl_new;
  }
  return max (incl, excl);
}

int main() {
  int arr[] = {5, 5, 10, 100, 10, 5};
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("%d", sum(arr, size));
  return 0;
}
