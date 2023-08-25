// Write a function that takes the dot product of two vectors.
// Both vectors are passed in as std::vectors of doubles.
// You may assume they are the same size.
#include <iostream>
#include <vector>

using namespace std;

double dot(vector<double> v1, vector<double> v2) {
  const auto n = v1.size();
  double result = 0.0;
  for (int i = 0; i < n; ++i) {
    result += v1[i] * v2[i];
  }
  return result;
}

int main() {
  cout << dot({1.0, 2.0}, {2.0, 3.0}) << "\n";
}
