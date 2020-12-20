#include <iostream>
#include <vector>
using namespace std;

struct  Heap
{
    vector<int> heap;
    Heap() {}

    void push(int x) {
        heap.push_back(x);
        int i = (int)heap.size() - 1;
        while (i > 0) {
            // parent index
            int p = (i - 1) / 2;
            // TODO: when first push, maybe p is -1. Can vector assign -1?
            if (heap[p] > x) break;
            heap[i] = heap[p];
            i = p;
        }
        heap[i] = x;
    }
};

int main() {
    Heap h;
    h.push(5);
    h.push(3);
    h.push(7);
}
