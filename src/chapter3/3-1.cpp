#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, v;
    cin >> n >> v;
    vector<int> a(n);

    for (int i=0; i<n; i++) cin >> a[i];

    // linear search
    bool exist = false;
    for (int i=0; i<n; i++) {
        if (a[i] == v) {
            exist = true;
        }
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}