#include <iostream>
#include <string>
using namespace std;

int main() {

  string name="vijay";
  string * ptr = &name;

  cout<<endl<<endl;
  cout<<"Name value        : "<<name<<endl;
  cout<<"Name address      : "<<&name<<endl;
  cout<<"Pointer value     : "<<ptr<<endl;
  cout<<"Pointer reference : "<<*ptr<<endl;
  cout<<endl<<endl;

  return 0;

}

