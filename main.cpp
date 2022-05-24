// Title: Copy Assignment Operator
// Purpose: copy by value, create and free memory
// Author: Fransiskus Agapa
// Have fun - enjoy the process - practices make improvement

#include <iostream>
#include "MyClass.h"

using std::cout;
using std::endl;

int main()
{
  cout << endl;
  MyClass fClass;
  MyClass sClass;
  cout << "1st val: " << fClass.GetVal() << endl;
  cout << "2nd val: " << sClass.GetVal() << endl;
  cout << endl;
  fClass.SetVal(6);
  sClass = fClass;

  cout << "1st val: " << fClass.GetVal() << endl;
  cout << "2nd val: " << sClass.GetVal() << endl;
  cout << endl;

  fClass.SetVal(20);
  cout << "1st val: " << fClass.GetVal() << endl;
  cout << "2nd val: " << sClass.GetVal() << endl;

  return 0;
}
