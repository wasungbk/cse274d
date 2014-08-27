// classes example
#include <iostream>
#include "rectangle.h"
using namespace std;




int main () {
  Rectangle rect;
  // creates a pointer to a rectangle object
  Rectangle *pRect;
  // assign the pointer to the object
  pRect = &rect;

  cout << "area: " << pRect->area()<< endl;
  cout << "memory location for rect " << pRect << endl;
  rect.set_values (3,10);
  cout << "area: " << rect.area()<< endl;
  return 0;
}
