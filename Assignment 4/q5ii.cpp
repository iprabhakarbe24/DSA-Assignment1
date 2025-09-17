#include <iostream>
using namespace std;

#define size 10

class stack2 {
    int q[size];
    int f, r;
public:
    stack2() { f = -1; r = -1; }

    int isempty() { return f == -1; }

    void enqueue(int x) {
        if (r == size - 1) {
            cout << "stack full\n";
            return;
        }
        q[++r] = x;
    }

    int dequeue() {
        if (isempty()) {
            cout << "stack empty\n";
            return -1;
        }
        return q[f++];
    }

    void push(int x) {
        enqueue(x);

        
        int count = r - f;
        for (int i = 0; i < count; i++) {
            int temp = dequeue();
            enqueue(temp);
        }
    }

    void pop() {
        if (isempty()) {
            cout << "stack empty\n";
            return;
        }
        cout << "popped: " << dequeue() << endl;
        if (f > r) f = r = -1;
    }

    void top() {
        if (isempty()) cout << "stack empty\n";
        else cout << "top: " << q[f] << endl;
    }
};

int main() {
    stack2 s;
    s.push(10);
    s.push(20);
    s.top();
    s.pop();
    s.top();
}
