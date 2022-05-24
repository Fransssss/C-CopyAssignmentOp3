// Implementation of MyClass

#include "MyClass.h"
#include <iostream>

using std::cout;
using std::endl;

MyClass::MyClass()
{
    cout <<"[Default Constructor]" << endl;
    _value = new int;                              // create memory block before assign a value
    *_value = 0;
}

MyClass& MyClass::operator=(const MyClass &oriObj)
        {
            cout <<"[Copy Assignment Operator=]" << endl;
            if(this != &oriObj)                // make the objects are different
            {
                delete _value;                 // empty the data member
                _value = new int;              // set a new block of memery
                *_value = *(oriObj._value);    // set a value
            }
            return *this;
        }


MyClass::~MyClass()
{
    cout <<"[Destructor]" << endl;
    delete _value;
}

void MyClass::SetVal(const int &v)
{
    cout <<"[Set a value]" << endl;
    *_value = v;
}

int MyClass::GetVal() const
{
    return *_value;
}