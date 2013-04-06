#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

static auto myfind(const vector<string>& list, const string& value) -> decltype(list.begin()) {
  return find_if(list.begin(), list.end(), [&value] (const string& str) {
      return value == str;
    });
}

int main(int argc, char* argv[]) {
  vector<string> list = {"Apple", "Orange", "Banana"};

  auto found = find_if(list.begin(), list.end(), [] (const string& str) {
      return str == "Orange";
    });

  if (found == list.end()) {
    cout << "Not Found" << endl;
  } else {
    cout << "In position: " << found - list.begin() << endl;
  }

  auto found1 = myfind(list, "Banana");
  if (found1 == list.end()) {
    cout << "Not Found" << endl;
  } else {
    cout << "In position: " << found1 - list.begin() << endl;
  }

  return 0;
}
