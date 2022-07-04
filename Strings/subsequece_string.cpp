#include <iostream>
#include <math.h>

using namespace std;

int subsequenceOfString(string input, string output[]) {

  if (input.size() == 0) {
    output[0] = " ";
    return 1;
  }
  // passing the string except 0 index sting is passed from 0 to last index.
  string smallString = input.substr(1);

  // calling the recursion
  int smallOutputSize = subsequenceOfString(smallString, output);

  // copying and adding the 0th index value to the output.
  for (int i = 0; i < smallOutputSize; i++) {
    output[i + smallOutputSize] = input[0] + output[i];
  }
  // here as we have increase the size so i have multiplied by 2.
  return 2 * smallOutputSize;
}

int main() {

  string input;
  cin >> input;
  int totalsizeOfsubsequence = pow(2, input.size());
  string *output = new string[totalsizeOfsubsequence];
  int count = subsequenceOfString(input, output);
  for (int i = 0; i < count; i++) {
    cout << output[i] << endl;
  }
  return 0;
}