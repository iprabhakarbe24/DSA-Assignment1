#include <iostream>
using namespace std;

#define size 10

class stack1 {
    int q1[size], q2[size];
    int f1, r1, f2, r2;
public:
    stack1() { f1 = r1 = f2 = r2 = -1; }

    int isempty() { return f1 == -1; }

    void push(int x) {
        if (r1 == size - 1) {
            cout << "stack full\n";
            return;
        }
        
        if (f2 == -1) f2 = 0;
        q2[++r2] = x;

        // move q1 to q2
        while (f1 != -1 && f1 <= r1) {
            q2[++r2] = q1[f1++];
        }

      
        for (int i = 0; i <= r2; i++) q1[i] = q2[i];
        f1 = 0;
        r1 = r2;
        f2 = r2 = -1;
    }

    void pop() {
        if (isempty()) {
            cout << "stack empty\n";
            return;
        }
        cout << "popped: " << q1[f1++] << endl;
        if (f1 > r1) f1 = r1 = -1;
    }

    void top() {
        if (isempty()) cout << "stack empty\n";
        else cout << "top: " << q1[f1] << endl;
    }
};

int main() {
    stack1 s;
    s.push(10);
    s.push(20);
    s.top();
    s.pop();
    s.top();
    return 0;
}
