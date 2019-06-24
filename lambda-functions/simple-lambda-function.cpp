#include <vector>
#include <cstdio>

// Visits all elements of a vector vec and invokes the
// visitor for each item.

template <typename T, typename F>
void visit(std::vector<T> &vec, const F &visitor)
{
  for (auto item : vec)
  {
    visitor(item);
  }
}

int main()
{
  std::vector<int> vec = {0, 1, 2};

  // Calling visit to print each element of a vector.
  // The printing code is passed as a lambda function.
  visit(vec, [](int a) { printf("%d\n", a); });
  return 0;
}