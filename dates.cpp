//<option value="1">1</option>

#include<iostream>
using namespace std;

int main(){

  /*for(int i=2019; i<=1900; i--){
    std::cout << "<option value"<<">"<<i<<"</option>" << '\n';
  }
 i=2019;*/

while(i>=1900){
  std::cout << "<option value"<<">"<<i<<"</option>" << '\n';
  i--;
}
  return 0;
}
