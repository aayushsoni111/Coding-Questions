#include <stdio.h>

int sort012(int arr[], int n) {
  int l = 0, m = 0, h = n - 1;
  while (m <= h) {
    if (arr[m] == 0) {
      int t = arr[l];
      arr[l] = arr[m];
      arr[m] = t;
      l++;
      m++;
    } else if (arr[m] == 1) {
      m++;
    } else if (arr[m] == 2) {
      int t = arr[h];
      arr[h] = arr[m];
      arr[m] = t;
      h--;
    } else {
      return 0;
    }
  }
  return 1;
}

int main() {
  int arr[] = {1, 2, 1, 2, 2, 0, 0, 1, 1};
  int arr_size = sizeof(arr) / sizeof(arr[0]);
  int result = sort012(arr, arr_size);
  if (result) {
    for (int i = 0; i < arr_size; i++) printf("%d ", arr[i]);
  } else {
    printf("Wrong Input");
  }
  return 0;
}
