/* 
This file calculates the factorial of a number, and was developed
as a means to practice recursive algorithms in C++
*/

#include <iostream>

using namespace std;

int factorial(int);

int main () {

  for ( int num=1; num < 10; num++) {
    cout << "Factorial of " << num << " = " << factorial(num) << "\n";
  }

  return 0;
}

int factorial(int input){
  if ( input < 0 ) {
    cout << "Input number (" << input << ") cannot be negative\n";
    return -1;
  }
  if ( input == 1 || input == 0 ) {
    return 1;
  } else {
    return input*factorial(input-1);
  }
}
