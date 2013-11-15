#include<vector>
namespace appLib{

template<typename T>
struct vec : std::vector<T>{
  //inherit constructors
  //provide ranged checking
  using std::vector<T>::vector;

  T& operator[](unsigned int i){
    return std::vector<T>::at(i);
  }
  const T& operator[](unsigned int i) const{
    return std::vector<T>::at(i);
  }
};

}
