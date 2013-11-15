// option 1, typesafe, not a compile time constant
template <typename T, std::size_t N>
inline std::size_t size_of_array( T (&)[N] ) {
   return N;
}
/*template <typename T, int N>
inline vector<T> make_vector( const T (&data)[N]){
  return vector<T>(data, data + N);
  }*/
// option 2, not typesafe, compile time constant
//#define ARRAY_SIZE(x) (sizeof(x) / sizeof(x[0]))

// option 3, typesafe, compile time constant
template <typename T, std::size_t N>
char (&sizeof_array( T(&)[N] ))[N];    // declared, undefined
#define ARRAY_SIZE(x) sizeof(sizeof_array(x))
