#include <thread>
#include <iostream>

int main(int argc, char* argv[]) {
  std::thread t1([] () {
      std::cout << "I'm a child thread" << std::endl;
    });

  std::cout << "I'm master thread" << std::endl;
  t1.join();

  return 0;
}
