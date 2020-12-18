#include <iostream>
#include <vector>
using namespace std;
const int MAX = 5;

// queue
int q[MAX];

// 最後に挿入された要素の次の添字
int tail = 0; 
// 最初に挿入された要素の添字
int head = 0;

void init() {
    tail = 0;
    head = 0;
}

bool isEmpty() {
    return (head == tail);
}

bool isFull() {
    return (head == (tail + 1) % MAX);
}

void enqueue(int x) {
    if (isFull()) {
        cout << "quue is full." << endl;
        return;
    }
    q[tail] = x;
    ++tail;
    // When tail reach the end of the queue.
    if (tail == MAX) tail = 0;
}

int dequeue() {
    if (isEmpty()) {
        cout << "queue is empty." << endl;
        return -1;
    }
    int res = q[head];
    ++head;
    // When head reach the end of the queue.
    if (head == MAX) head = 0;
    return res;
}

int main() {
    init();

    enqueue(1);
    enqueue(2);
    enqueue(3);

    enqueue(4);
    enqueue(5);

}
