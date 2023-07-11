#include <iostream>
#include <vector>
#include <string>
using namespace std;


int sum(int k) {

   if (k > 0) {
      return (k + sum(k-1));
    } else {
       return 0;
       }

    }



int main(){

  int n=10;
  int result1=0, result2=0;

  result1 = n*(n+1)/2;
  result2 = sum(n);

  cout<<endl<<endl;
  cout<<"Analytical sum of "<<n<<" numbers : "<<result1<<endl;
  cout<<"Numerical sum of "<<n<<" numbers  : "<<result2<<endl;
  cout<<endl<<endl;

  return 0;

}
