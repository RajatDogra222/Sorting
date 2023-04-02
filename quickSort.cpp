#include <iostream>
using namespace std;

int partition(int a[], int li , int hi, int n) {
  int pivot = a[hi];
  int i = li;
  int j = li;
  while (i <= hi) {
    if (a[i] <= pivot) {
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      i++;
      j++;
    }
    else
      i++;
  }

  return j - 1;
}

void quickSort(int a[], int li, int hi, int n) {
  if (li > hi) {
    return;
  }
  // if (li < hi) {
  int pi = partition(a, li, hi, n);
  quickSort(a, li, pi - 1, n);
  quickSort(a, pi + 1, hi, n);
  // }
}
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int li = 0, hi = n - 1;
  quickSort(a, li, hi, n);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
