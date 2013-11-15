#ifndef APPLIB_ALGORITHM_HEADER
#define APPLIB_ALGORITHM_HEADER

#include<iterator>
#include<algorithm>
#include<stdexcept>

namespace appLib{

template<typename Container>
void sort(Container& c){
  //static_assert(Range<Cont>(), "sort(): Cont argument not a Range");
  /*static_assert(Sortable<Iterator<Cont>>(), 
    "sort(): Cont argument not Sortable:");*/

  std::sort(begin(c), end(c));
}

template<typename Container, typename Predicate>
void remove_if(Container& c, Predicate p){
  //static_assert(Range<Cont>(), "sort(): Cont argument not a Range");
  c.erase(
    std::remove_if(begin(c), end(c),
      p
    ),
    end(c)
  );
}

template<typename Container_T, typename Container_U>
void copy(const Container_T& source, Container_U& target){
  /**static_assert(Range<Container_T>(), "copy(): first argument is
     not a Range");
     static_assert(Range<Container_U>(), "copy(): second argument is not
     a range");**/

  if(target.size() < source.size()) 
    throw std::out_of_range{"copy target too small"};

  std::copy(source.begin(), source.end(), target.begin());
}

}

#endif



