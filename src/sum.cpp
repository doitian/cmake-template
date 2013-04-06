#include <iostream>

int main(int argc, char* argv[]) {
  int a = 0;
  int b = 0;
  int sum = 0;

  std::cout << "First number: ";
  std::cin >> a;

  std::cout << "Second number: ";
  std::cin >> b;

  sum = a + b;
  std::cout << a << " + " << b << " = " << sum << std::endl;

  return 0;
}
