/* 
This file calculates approximates euler's number,
as a means to practice recursive algorithms in C++
*/

#include <iostream>

using namespace std;

int factorial(int);
double euler(int);

int main () {

  int limit;
  cout << " Please enter the limit for the approximation of Euler's number: ";
  cin >> limit;

  for ( int number = 1; number <= limit; number++) {
    cout << "Euler's number approximated using ("<<number<<") = " << euler(number) << endl;
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

double euler(int input){
  double value = 0.0;
  for ( int i=0; i <= input; i++) {
    value += 1. / (double)factorial(i);
  }
  return value;
}
