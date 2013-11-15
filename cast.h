#ifndef CAST_HEADER
#define CAST_HEADER
#include <string>
#include <sstream>
#include <stdexcept>
namespace appLib{

template<typename Target = std::string, typename Source = std::string>
Target to(Source arg){
  std::stringstream interpreter;
  Target result;

  if( !(( interpreter << arg ) 
      &&( interpreter >> result )
      &&( interpreter >> std::ws).eof()) )  //anything left in stream?
    throw std::runtime_error("to<>() failed ");
  
  return result;
}

template<>
int to(char arg){
  if(!isdigit(arg))
    throw std::runtime_error("character doesn't map to digit");
  switch(arg){
  case '0': return 0;
  case '1': return 1;
  case '2': return 2;
  case '3': return 3;
  case '4': return 4;
  case '5': return 5;
  case '6': return 6;
  case '7': return 7;
  case '8': return 8;
  case '9': return 9;
  }
}

//more portable then int{char} cast.
template<class Target, class Source>
Target narrow_cast(Source v){
  auto r = static_cast<Target>(v);
  if(static_cast<Source>(r) != v)
    throw std::runtime_error("narrow_cast<>() failed");
  return r;
}

}
#endif
