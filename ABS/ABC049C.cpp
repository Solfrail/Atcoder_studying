#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

/*
Sが"dream dreamer erase eraser"の4種の単語で構成される文字列になっているかどうか
dream -> dream, er, erase, 0
er -> dream, erase, 0
erase -> dream, r, erase, 0
r -> dream, erase, 0
*/

int main()
{
  string S;
  cin >> S;
  size_t size = S.length();

  ll cnt = 0;
  while(cnt < size){
    if(S.substr(cnt,5)=="dream"){
      cnt += 5;
      if(S.substr(cnt,2)=="er" && S.substr(cnt,5)!="erase") cnt += 2;
    }
    else if(S.substr(cnt,5)=="erase"){
      cnt += 5;
      if(S.substr(cnt,1)=="r") cnt++;
    }
    else{
      cout << "NO" << endl;
      return 0;
    }
  }
  if(cnt == size) cout << "YES" << endl;
  return 0;
}