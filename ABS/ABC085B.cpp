#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

void printVec(std::vector<int> &vec) {
  std::cout << "";
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}

int main()
{
    int N;
    int d;
    int ans;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++){
         cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()),a.end());
    cout << a.size() << endl;
    return 0;
}