#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long w, b;
    long long B = 5, W = 7;
    cin >> w >> b;

    
    //cout << w << " " << b << endl;

    string piano = "wbwbwwbwbwbwwbw";

    long long wcnt = 0;
    long long bcnt = 0;
    //int flag = 0;
    for(int i=0; i<B+W; i++){
        long long wcnt = 0;
        long long bcnt = 0;
        for(int j=0; j<b+w; j++){
            if(piano[(i+j)%12] == 'w') wcnt++;
            else bcnt++;
        }
        if(wcnt == w && bcnt == b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}