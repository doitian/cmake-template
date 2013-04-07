#include <future>
#include <thread>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  vector<int> list(100);
  for (auto i = 0; i < list.size(); ++i) {
    list[i] = i + 1;
  }

  vector<future<int> > results(10);
  for (auto i = 0; i < 10; ++i) {
    results[i] = move(async([i, &list] () {
          return std::accumulate(list.begin() + i * 10, list.begin() + i * 10 + 10, 0);
        }));
  }

  auto sum = std::accumulate(results.begin(), results.end(), 0, [] (int sum, future<int>& a) 
                             {
                               return sum + a.get();
                             });


  cout << sum << endl;
  
  return EXIT_SUCCESS;
}
