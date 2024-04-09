#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N, K;
    cin >> N >> K;
    set<int> A;

    for (ll i = 0; i < N; i++){
        int a;
        cin >> a;
        if(a <= K) A.insert(a);
    }

    ll ans = (ll) K * (K+1) / 2;
    for(int i: A) ans -= i;
    cout << ans << endl;
    return 0;
}