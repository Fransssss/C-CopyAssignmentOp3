// Declaration MyClass

#ifndef C_COPYASSIGNMENTOP3_MYCLASS_H
#define C_COPYASSIGNMENTOP3_MYCLASS_H

class MyClass
{
private:
    int* _value;
public:
    MyClass();
    MyClass& operator= (const MyClass& oriObj);
    ~MyClass();
    void SetVal(const int& v);
    int GetVal() const;
};

#endif //C_COPYASSIGNMENTOP3_MYCLASS_H
