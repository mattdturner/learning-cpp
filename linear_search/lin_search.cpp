#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int>&);
void printVector(const vector<int>&);
bool linSearch(int, const vector<int>&);

int main () {
  vector<int> myVec;

  fillVector(myVec);
  printVector(myVec);

  int toFind = 0;
  cout << "What integer should we search for? \n";
  cin >> toFind;

  if ( linSearch(toFind, myVec) ) {
    cout << toFind << " is in the vector!\n";
  } else {
    cout << toFind << " is NOT in the vector!\n";
  }

  return 0;
}

// Function to fill the vector
void fillVector(vector<int>& newVec) {
  int input;
  cout << "Please enter the numbers, and stop with (-1): ";
  cin >> input;

  while (input != -1) {
    newVec.push_back(input);
    cin >> input;
  }
}

// Function to print the vector
void printVector(const vector<int>& newVec) {
  cout << "The numbers are: ";
  for (int i = 0; i < newVec.size(); i++) {
    cout << newVec[i] << " ";
  }
  cout << "\n";
}

bool linSearch(int toFind, const vector<int> &myVec) {
  for (int i = 0; i < myVec.size(); i++) {
    if (toFind == myVec[i]) {
      return true;
    }
  }

  return false;
}
