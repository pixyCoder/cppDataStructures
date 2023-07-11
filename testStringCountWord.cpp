#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countWords(string str) {

 int nw=0;
 string temp = "";
 vector<string> words;

 for (int i=0; i<str.length(); i++) {
   if (str[i] == ' ') {
     words.push_back(temp);
     temp="";
    } else {
        temp += temp[i];    
      }
 }

  nw = 1 + words.size();
  return nw;

 }

int main() {

 string sentence = "my name is vijay venkatesh";
 int nWords;
 
 nWords = countWords(sentence);
 cout<<endl<<endl;
 cout<<"Input sentence  : "<<sentence<<endl;
 cout<<"Number of words : "<<nWords<<endl;
 cout<<endl<<endl;
 
 return 1;

}
