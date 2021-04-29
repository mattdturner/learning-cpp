#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//const float pi=3.141592;
const double pi = atan(1)*4;

float deg2rad(const float degrees);

int main () {

  float r = 0.0f;
  cout << "Conversion of 1 to 360 degrees to radians: \n";

  for (int i = 1; i <= 360; i++){
    r = deg2rad((float)i);
    cout << i << " degrees = " << setprecision(6) << fixed << r << " radians\n";
  }

  return 0;
}

float deg2rad(const float degrees) {
  float r = 0.0f;

  r = degrees * pi / 180.;
  return r;
}
