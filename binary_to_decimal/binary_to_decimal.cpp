#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(string);
bool checkIfBinary(string);

int main () {
  string binaryNumber;
  bool valid = true;

  do 
  {
    valid = true;
    cout << "Please enter a binary number to be converted to decimal format: ";
    cin >> binaryNumber;

    valid = checkIfBinary(binaryNumber);

  } while (!valid);

  // Print 3 newlines for formatting
  cout << endl << endl << endl;
  cout << "Binary Number: " << binaryNumber << endl;
  cout << "Deccimal Number: " << binaryToDecimal(binaryNumber) << endl;

  return 0;
}

int binaryToDecimal(string binaryNumber) {
  // This function is passed a binary number, and converts it to a decimal number

  // Get the length of the string
  int strLength = binaryNumber.length();

  int mult = 1;
  int decimalNumber = 0;
  for (int i = strLength-1; i >= 0; i--) {
    // Need to convert the character binaryNumber[i] to int
    decimalNumber += (binaryNumber[i]-'0') * mult;
    mult *= 2;
  }

  return decimalNumber;

}

bool checkIfBinary(string binaryNumber) {
  // This function checks if the input string represents a binary number 
  // (i.e., a number with only 0's and 1's)
  bool valid = true;

  // Check to make sure input value consists of only 0s and 1s
  for (int i = 0; i < binaryNumber.length(); i++) 
  {
    if ( binaryNumber[i] != '0' && binaryNumber[i] != '1' ) 
    {
      valid = false;
      cout << "Binary numbers are made of only 0's and 1's.\n";
      cout << "The input includes an invalid value.\n";
      cout << binaryNumber << endl;
      for (int j = 0; j < i; j++) 
      {
        cout << "-";
      }
      cout << "^\n";
      break;
    }
  }
  return valid;
}
