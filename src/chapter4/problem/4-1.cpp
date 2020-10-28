#include <iostream>
using namespace std;

int tribo(int N) {
    if (N==0) return 0;
    if (N==1) return 0;
    if (N==2) return 1;

    int res = tribo(N-1) + tribo(N-2) + tribo(N-3);
    return res;
}

int main() {
    int ans = tribo(6);
    cout << ans << endl;
}