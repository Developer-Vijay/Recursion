#include <iostream>

using namespace std;

void mergeTwoArrays(int arr[], int s, int e, int mid, int size) {

  int n1 = mid - s + 1;
  // change;
  int n2 = e - mid;
  int first[n1];
  int second[n2];

  for (int i = 0; i < n1; i++) {
    first[i] = arr[s + i];
  }

  for (int i = 0; i < n2; i++) {
    second[i] = arr[mid + 1 + i];
  }
  // merging both arrays

  int i = 0;
  int j = 0;
  int k = s;

  while (i < n1 && j < n2) {
    if (first[i] < second[j]) {
      arr[k] = first[i];
      i++;
      k++;
    } else {
      arr[k] = second[j];
      j++;
      k++;
    }
  }

  while (i < n1) {
    arr[k] = first[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = second[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int s, int e, int size) {
  if (s >= e || s == e) {
    return;
  }
  int mid = (s + e) / 2;
  mergeSort(arr, s, mid, size);
  mergeSort(arr, mid + 1, e, size);

  mergeTwoArrays(arr, s, e, mid, size);
}

int main() {

  int arr[] = {5, 8, 3, 2, 1, 4, 6, 7};

  mergeSort(arr, 0, 7, 8);

  for (int i = 0; i < 7; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}