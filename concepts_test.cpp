#include "concepts.h"
#include <iostream>
#include <vector>
constexpr bool true_pred(){
  return true;
}
constexpr bool false_pred(){
  return false;
}

constexpr bool first_greater_second(double first, double second){
  return first > second;
}

int main(){
  int x;
  std::cin >> x;
  std::cout << Estd::All(true_pred(), first_greater_second(2, x), true_pred(), true_pred());
}
