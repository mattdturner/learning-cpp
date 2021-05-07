#include <iostream>
#include <string>

// This file seems to be very poorly organized, but it follows the format
// set out in the course (with a few modifications to improve the code)..

using namespace std;

int main () {

  // Define a constant for the number of items available
  const int itemCount = 3;
  // Define the items and the price for each item
  double itemPrices[itemCount] = {1.5, 2.5, 3.5};
  string items[itemCount] = {"Butter", "Milk", "Eggs"};
  // Initialize the total price
  double totalPrice[itemCount] = {0, 0, 0};

  // numItems = the number of items that are selected from the list
  // itemNum = argument for the switch function
  int numItems = 0;
  int itemNum = 0;

  while ( numItems != -1 ) {
    for (int i = 0; i < itemCount; i++) {
      if ( numItems != -1 ) {
        cout << "Please enter the number of " << items[i] << " products that you wish \n" << 
                " to purchase @ $" << itemPrices[i] << " per item (stop by entering -1)." 
                << endl;
        cin >> numItems;
        if ( numItems != -1 ) {
          switch(i+1) {
            case 1:
              totalPrice[0] += itemPrices[0] * numItems;
              break;
            case 2:
              totalPrice[1] += itemPrices[1] * numItems;
              break;
            case 3:
              totalPrice[2] += itemPrices[2] * numItems;
              numItems = -1;  // break the while loop
              break;
            default:
              // Should never get here
              cout << "Invalid input.  Please re-enter." << endl;
              break;
          }
        }
      }
    }
  }
  int sum = 0;
  for ( int i = 0; i < itemCount; i++) {
    cout << "The total for item #" << i+1 << " is: $" << totalPrice[i] << endl;
    sum += totalPrice[i];
  }
  cout << "The total cost for all products is $" << sum << endl;

  return 0;
}
