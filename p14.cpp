/*Write a C++ program to print message when object gets destroyed using destructor.*/
//220130318038
//Bhavy Bhuva
#include <iostream>
using namespace std;
class MyClass
{
public:
  MyClass()
  {
    cout << "Object created" << endl;
  }
  ~MyClass()
  {
    cout << "Object destroyed" << endl;
  }
};

int main()
{
  MyClass obj;
  return 0;
}