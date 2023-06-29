#include <concepts>
#include <iostream>

template <typename T>
concept arithmetic = std::integral<T> || std::floating_point<T>;

template <typename T>
concept my_number = arithmetic<T> && sizeof(T) <= 8;

auto func(my_number auto x) {return x;}

int main() {
  std::cout << "hello world" << std::endl;
  auto x = func(10);
  // auto y = func(2.0L);   // error can not compile
  return 0;
}