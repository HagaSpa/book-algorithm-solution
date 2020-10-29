#include <iostream>
#include <vector>
using namespace std;

int tribo(int N, vector<long long> memo) {
    if (N==0) return 0;
    if (N==1) return 0;
    if (N==2) return 1;
    
    // already calculated
    if (memo[N]!=-1) return memo[N];

    memo[N] = tribo(N-1, memo) + tribo(N-2, memo) + tribo(N-3, memo);
    return memo[N];
}

int main() {
    vector<long long> memo;
    memo.assign(7, -1);
    int ans = tribo(6, memo);
    cout << ans << endl;
}