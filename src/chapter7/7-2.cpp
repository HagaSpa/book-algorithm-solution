#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

#include <fstream>

// 区間
using Interval = pair<int, int>;

// 区間を終端時刻で大小比較する関数
bool cmp(const Interval &a, const Interval &b) {
    return a.second < b.second;
}

int main() {
    std::ifstream in("/workspaces/book-algorithm-solution/src/chapter7/input.txt");
    std::cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;

    vector<Interval> inter(N);
    for (int i = 0; i < N; i++)
        cin >> inter[i].first >> inter[i].second;
    
    // 終端時間が早い順にソート
    sort(inter.begin(), inter.end(), cmp);

    // 貪欲法
    int res = 0;
    int current_end_time = 0;
    for (int i = 0; i < N; i++) {
        // 最後に選んだ区間とかぶるのは除く
        if (inter[i].first < current_end_time) continue;
        res++;
        current_end_time = inter[i].second;
    }
    cout << res << endl;
}