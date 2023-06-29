#include <iostream>
#include <ranges>
// import <std::iostream>;

int func1() {
  auto const ints = {0, 1, 2, 3, 4, 5};
  auto square = [](int i) { return i * i; };
  auto even = [](int i) { return 0 == i % 2; };

  // "pipe" syntax of composing the views:
  for (int i : ints | std::views::filter([](int i) { return i % 2 == 1; }) |
                   std::views::filter([](int i) { return i == 1; })) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  // "pipe" syntax of composing the views:
  for (int i :
       ints | std::views::filter(even) | std::views::transform(square)) {
    std::cout << i << ' ';
  }

  std::cout << '\n';

  // a traditional "functional" composing syntax:
  for (int i : std::views::transform(std::views::filter(ints, even), square)) {
    std::cout << i << ' ';
  }
}

// std::ranges::find()

int main() {
  func1();
  return 0;
}