#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

int main()
{
    int n;
    vector<ll> A;
    cin >> n;
    for(int i=0; i<n; ++i){
        ll a;
        cin >> a;
        A.insert(A.end(), a);
    }
    int cnt = 0;
    int flag = 0;

    while(true){
        for(ll& x: A){
            if(x % 2 == 1){
                flag = 1;
                break;
            } 
            x /= 2;
            //cout << x << endl;
        }
        if(flag == 1) break;
        cnt++;
    }           
    cout << cnt << endl;
    return 0;
}