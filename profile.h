#ifndef PROFILE_HEADER
#define PROFILE_HEADER
#include <chrono>
namespace appLib{

template <typename Functor>
typename std::chrono::high_resolution_clock::rep 
Time(Functor f){
  using namespace std::chrono;
  auto t0 = high_resolution_clock::now();
  f();
  auto t1 = high_resolution_clock::now(); 
  return  duration_cast<milliseconds>(t1 - t0).count();
}

}
#endif
