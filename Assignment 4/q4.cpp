#include <iostream>
using namespace std;

int main() {
    char s[50];
    cin >> s;

    int freq[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i]]++;
        int found = 0;
        for (int j = 0; j <= i; j++) {
            if (freq[s[j]] == 1) {
                cout << s[j] << " ";
                found = 1;
                break;
            }
        }
        if (!found) cout << "-1 ";
    }
    cout << endl;
}
