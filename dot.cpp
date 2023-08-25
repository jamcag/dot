// Write a function that takes the dot product of two vectors.
// The vector can be a std::array or std::vector.
// You may assume they are the same size.
#include <array>
#include <iostream>
#include <vector>

using namespace std;

template<typename T>
struct can_dot {
  static constexpr bool value = is_arithmetic_v<T> && !is_same_v<T, char>;
};

template<typename T>
constexpr bool can_dot_v = can_dot<T>::value;

template<typename T, typename U>
typename T::value_type dot(T v1, U v2) {
  static_assert(can_dot_v<typename T::value_type> && can_dot_v<typename U::value_type>,
    "Vectors must be numeric.");
  const auto n = v1.size();
  typename T::value_type result = 0.0;
  for (int i = 0; i < n; ++i) {
    result += v1[i] * v2[i];
  }
  return result;
}

int main() {
  vector<float> v{1.0, 2.0};
  array<double, 2> w{3.0, 4.0};
  cout << dot(v, w) << "\n";
}
