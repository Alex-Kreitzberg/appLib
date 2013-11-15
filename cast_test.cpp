#include "cast.h"
#include <iostream>
using namespace std;
using namespace estd;

int main(){
  auto c1 = narrow_cast<char>(64);
  auto c2 = narrow_cast<char>(-64);
  //  auto c3 = narrow_cast<char>(264); //will throw if 8-bit and signed

  //  char* p = "happy";
  //  auto i1 = narrow_cast<int>(p); //throw

  auto d1 = narrow_cast<double>(1/3.0F);
  cout << d1 << "\n";
  
  char a = '3';
  int num = to<int>(a);
  cout << num;
  //  char b = 'b';
  //  to<int>(b);
  
}
