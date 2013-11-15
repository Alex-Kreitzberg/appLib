#include <iostream>

template<typename T>
void write(T arg){
  std::cout << arg;
}

template<typename T, typename... Args>
void write(T arg, Args... args){
  std::cout << arg;
  write(args...);
}

int main(){
  int x = 3;
  int y = 4;
  write("x = ", x, ", y = ", y);
}
