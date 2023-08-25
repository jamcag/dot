// Write a function that takes the dot product of two vectors.
// The vector can be a std::array or std::vector.
// You may assume they are the same size.
#include <array>
#include <iostream>
#include <vector>

using namespace std;

template<typename T, typename U>
typename T::value_type dot(T v1, U v2) {
  const auto n = v1.size();
  typename T::value_type result = 0.0;
  for (int i = 0; i < n; ++i) {
    result += v1[i] * v2[i];
  }
  return result;
}

int main() {
  vector<int> v{1, 2};
  array<int, 2> w{3, 4};
  cout << dot(v, w) << "\n";
}
