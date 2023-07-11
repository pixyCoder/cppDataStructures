#include <iostream>
#include <string>
#include <vector>
using namespace std;

string concatenateStrings(string a, string b) {

  string result="";
  result = a.append(b);
  return result;

 }

int main(){

  string s[2] = {"Vijay", "Venkatesh"};

  string answer = concatenateStrings(s[0], s[1]);

  cout<<endl<<endl;
  cout<<"Input string 1      : "<<s[0]<<endl;
  cout<<"Input string 2      : "<<s[1]<<endl;
  cout<<"Concatenated string : "<<answer<<endl;
  cout<<endl<<endl;

  return 1;
}
