#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
using Graph = vector<vector<int>>;

int main() {
    std::ifstream in("/workspaces/book-algorithm-solution/src/chapter10/10-3.txt");
    std::cin.rdbuf(in.rdbuf());

    // vertex, edge
    int N, M;
    cin >> N >> M;

    // graph
    Graph G(N);
    for (int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    // print
    for (int i = 0; i < G.size(); i++) { 
        cout << i << " : ";
        for (int j = 0; j < G[i].size(); j++) 
            cout << G[i][j] << " "; 
        cout << endl; 
    } 
}