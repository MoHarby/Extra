

//**********************In the name of allah the most gracious the most merciful***********************
//This codes gets the numbers included in a string
//*All digits in the string are numbers or spaces


#include <iostream>
#include<vector>
#include<string>
#include<sstream> 
using namespace std;                             

vector<int> getNumbersFromString(const string & str){
  vector<int> res;
  int sz = str.size();
  for(int i = 0; i < sz; i++){
    if(str[i] == ' ')continue;
    
    int end,start = i;
    int k = 1;
    for(; k < sz; k++){
      if(str[i+k] == ' '){
        break;
      }
    }
    //getting substring of string using the first index and the length of the string
    string numInString = str.substr(start,k); 
    stringstream stringToNum(numInString);
    int x;
    stringToNum >> x;
    res.push_back(x);

    i += k;
  }
  return res;
}
void printNumsInString(string & stringOfNums){
  vector<int> r1 = getNumbersFromString(stringOfNums);
  cout << r1[0];
  for (int i = 1; i < r1.size(); i++){
   cout << ' '<< r1[i];
  }
  cout << '\n';
}

int main() {
  string s = "1 12 13 5 7";
  string s2 = "   1      12 13    5 7";
  
  printNumsInString(s);
  printNumsInString(s2);
  
}


/*
Output

1 12 13 5 7
1 12 13 5 7

*/
