#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

int main()
{
    ll N; // 10
    ll Y; //70000 = 
    ll sum;
    cin >> N >> Y; //N枚 Y円　の入力

    for (ll i = 0; i <= N; i++){ //10000
      if(10000*i > Y) break;
      for (ll j = 0; j <= N-i; j++){ //5000
          sum = i*10000+j*5000+(N-i-j)*1000;
          if(sum == Y){
            cout << i << " " << j << " " << N-i-j << endl;
            return 0;
          }
          else if(sum > Y) break;
      }
      
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}