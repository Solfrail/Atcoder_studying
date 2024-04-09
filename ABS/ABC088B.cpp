#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    int a[N];
    int ans = 0;

    for (int i = 0; i < N; i++) cin >> a[i];
    sort(a, a+N, greater<int>());
    for (int i = 0; i < N; ++i){
        if(i%2==0) ans += a[i];
        else ans -= a[i];
    }

    cout << ans << endl;
    return 0;
}