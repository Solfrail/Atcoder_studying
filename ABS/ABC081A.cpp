#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for(char c: s){
        if(c=='1') ++ans; 
    }
    cout << ans << endl;
    return 0;
}