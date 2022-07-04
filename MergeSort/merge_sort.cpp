#include <iostream>

using namespace std;

void mergeTwoSortedArrays(int arr[], int s, int e, int mid) {
  // Declaring the size for two arrays

  int n1 = mid - s + 1;
  int n2 = e - mid;

  int firstArray[n1];
  int secondArray[n2];

  // copying the elements of array from main array to first and second array

  for (int i = 0; i < n1; i++) {
    firstArray[i] = arr[s + i];
  }

  for (int j = 0; j < n2; j++) {
    secondArray[j] = arr[mid + 1 + j];
  }

  // comparing and merging both arrays into the original array
  int i = 0;
  int j = 0;
  int k = s;
  while (i < n1 && j < n2) {
    if (firstArray[i] < secondArray[j]) {
      arr[k] = firstArray[i];
      i++;
      k++;

    } else {
      arr[k] = secondArray[j];
      j++;
      k++;
    }
  }

  // moving remaing elements from both the arrays to main array

  // first array
  while (i < n1) {
    arr[k] = firstArray[i];
    i++;
    k++;
  }
  // second array
  while (i < n2) {
    arr[k] = secondArray[j];
    j++;
    k++;
  }
}

void mergeHelp(int arr[], int size, int s, int e) {

  if (s >= e || s == e) {
    return;
  }
  int mid = (s + e) / 2;
  // here i have divided the array in two parts and calling the first part to
  // the array
  mergeHelp(arr, size, s, mid);
  mergeHelp(arr, size, mid + 1, e);

  mergeTwoSortedArrays(arr, s, e, mid);
}

void mergeSort(int arr[], int size) {
  if (size == 0 || size == 1) {
    return;
  }
  mergeHelp(arr, size, 0, size - 1);
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {

  int arr[100] = {3, 2, 9, 4, 5, 1, 7, 8};
  int size = 8;
  cout << "Before Sort" << endl;
  printArray(arr, size);

  mergeSort(arr, size);
  cout << "After Sort" << endl;
  printArray(arr, size);

  return 0;
}