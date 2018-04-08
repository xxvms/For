#include <iostream>

int main() {
  int x;
  std::cout << "Enter a number " << '\n';
  std::cin >> x;

  bool prime = true;

  for (int i = 2; i <= x / i; i++) {
    int factor = x / i;
    if (factor * i == x) {
      std::cout << "Factor found: " << i << " * " << factor << '\n';
      prime = false;
      break;
    }
  }

  std::cout << x << " is ";
  if (prime) {
    std::cout << "prime" << '\n';
  } else {
    std::cout << "not prime" << '\n';
  }

  return 0;
}