#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int q[50];
    for (int i = 0; i < n; i++) cin >> q[i];

    int half = n / 2;
    for (int i = 0; i < half; i++) {
        cout << q[i] << " " << q[i + half] << " ";
    }
    cout << endl;
    return 0;
}
