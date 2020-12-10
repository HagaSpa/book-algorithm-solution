#include <iostream>
#include <vector>
using namespace std;

#include <fstream>


/*
なんで最後の要素であるDn-1から計算するの？？
  - Dがシンプルになるから
順にやっても計算自体はできるはずだけど、複雑になる
 - 全てのステップにおけるDを導出した後に、Di~Dn-1までのDをDiに加算する必要があるはず。
*/
int main() {
    std::ifstream in("/workspaces/book-algorithm-solution/src/chapter7/7-3.txt");
    std::cin.rdbuf(in.rdbuf());
    
    int N;
    cin >> N;
    
    vector<long long> A(N), B(N);
    for (int i=0; i<N; ++i) cin >> A[i] >> B[i];

    long long sum = 0;
    for (int i=N-1; i>=0; --i) {
        A[i] += sum;
        long long amari = A[i] % B[i];
        long long D = 0;
        if (amari!=0) D = B[i] - amari;
        sum += D;
    }
    cout << sum << endl;
}