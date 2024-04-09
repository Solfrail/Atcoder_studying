#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

int main()
{
    ll a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    ll i, j, k;

    int cnt =0;
    for(i=0;i<=a;++i){
        for(j=0;j<=b;++j){
            for(k=0;k<=c;++k){
               if(500*i+100*j+50*k == x) ++cnt; 
            }
        }
    }
    cout << cnt << endl;
    return 0;
}