#include <bits/stdc++.h>   
using namespace std;
using ll = long long;

int main()
{
    int N, A, B;
    cin >> N;
    cin >> A;
    cin >> B;
    int x;
    int cnt = 0;
    int sum;

    for(int i=1;i<=N;++i){
        sum = 0;
        x = i;
        do{
            sum += x % 10;
            x /= 10;
        }while(x != 0);
        if(sum <= B && sum >= A){
          cnt += i;
        } 
    }
    cout << cnt << endl;
    return 0;
}