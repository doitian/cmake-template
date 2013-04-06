#include <utility>
#include <string>
#include <iostream>

using namespace std;

static void moveit(string& to, string&& from) {
  std::swap(from, to);
}

int main(int argc, char* argv[]) {
  string str;
  moveit(str, "foobar2000");

  cout << str << endl;

  return 0;
}
