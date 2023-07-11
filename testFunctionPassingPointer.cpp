
#include <iostream>
#include <cmath>
using namespace std;

void square(int u, int &v){

  v = pow(u,2);

}


int cube(int y) {

   int z = pow(y,3);
   return z;
}

int main() {

 int a=2,  b; 
 int c=3, d=0;

 b = cube(a);
 square(c, d);

 cout<<endl;
 cout<<"a          : "<<a<<endl;
 cout<<"a cube     : "<<b<<endl;
 cout<<"c          : "<<c<<endl;
 cout<<"c square   : "<<d<<endl;
 cout<<endl;
}
