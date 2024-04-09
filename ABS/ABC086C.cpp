#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

/*
条件1
(x+y)%2 == 1 : 奇数時間しか辿り着けない
(x+y)%2 == 0 : 偶数時間しか辿り着けない

条件2
時刻t_i から t_i+1 で進める歩数は t_i+1 - t_i 
*/

int main()
{
  int N;
  cin >> N;
  int t[N], x[N], y[N];
  int a, b, c;

  
  for(int i=0; i<N; ++i){
    cin >> t[i] >> x[i] >> y[i];

    //条件1
    if(t[i] % 2 == 1 && (x[i]+y[i]) % 2 == 0){
      cout << "No" << endl;
      return 0;
    }
    else if(t[i] % 2 == 0 && (x[i]+y[i]) % 2 == 1){
      cout << "No" << endl;
      return 0;
    }
  }

  //条件2
  if(N==1){
    if(t[0] < x[0] + y[0]){
      cout << "No" << endl;
      return 0;      
    }
  }
  else{
    for(ll i=0; i<N-1; ++i){

      if(t[i+1]-t[i] < abs(x[i+1]-x[i])+abs(y[i+1]-y[i])){
        cout << "No" << endl;
        return 0;      
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}
