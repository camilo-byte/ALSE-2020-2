#include <iostream>

using namespace std;
int main(){

  char c =70;
  int a = 50;
  float b = 50.;
  double d = 50.;

  char *p = NULL;

 cout << "Char:" << c << endl;
 cout << "int:" << a << endl;
 cout << "float:" << b << endl;
 cout << "doube:" << d << endl;

 p = &c;
 cout << " Direccion de c:" << *p << endl;


 return 0;
}
