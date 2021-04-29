#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int>&);
void printVector(const vector<int>&);
void sortVector(vector<int>&);
bool binSearch(int, const vector<int>&);

int main () {
  vector<int> myVec;

  fillVector(myVec);
  printVector(myVec);
  sortVector(myVec);
  printVector(myVec);

  int toFind = 0;
  cout << "What integer should we search for? \n";
  cin >> toFind;

  if ( binSearch(toFind, myVec) ) {
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

void sortVector(vector<int>& newVec) {
  int minInd, minVal = 0;
  for (int i = 0; i < newVec.size() - 1; i++) {
    minVal = newVec[i];
    minInd = i;
    for (int j = i+1; j < newVec.size(); j++) {
      if ( newVec[j] < minVal) {
        minVal = newVec[j];
        minInd = j;
      }
    }

    // Swap the min value of the remaining values w/ current index
    int temp = newVec[i];
    newVec[i] = minVal;
    newVec[minInd] = temp;
  }
}

bool binSearch(int toFind, const vector<int> &myVec) {
  int lowInd = 0;
  int midInd = 0;
  int maxInd = myVec.size() - 1;

  while ( lowInd <= maxInd ) {
    midInd = (lowInd + maxInd ) / 2;
    if ( myVec[midInd] == toFind ) {
      return true;
    } else if (myVec[midInd] > toFind ) {
      maxInd = midInd-1;
    } else {
      lowInd = midInd + 1;
    }
  }

  return false;
}
