#include <type_traits>

namespace Estd{
  
  template< class T, class U >
  constexpr bool Is_same(){
    return std::is_same<T,U>::value;
  }

  template<bool B, typename T = void>
  using Enable_if = typename std::enable_if<B,T>::type;


  constexpr bool All(bool predicate){
    return predicate;
  }

  template< class... Ps >
  constexpr bool All(bool head_predicate, Ps... tail_predicates ){
    return head_predicate && All(tail_predicates...);
  }


  template< class From, class To >
  constexpr bool Convertible(){
    return std::is_convertible< From, To >::value;
  }

}
