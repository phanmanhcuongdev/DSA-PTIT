#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> input(k + 1);
    for (int i = 1; i <= k; i++) {
        cin >> input[i];
    }

    vector<int> next = input;
    bool flag = false;

    // Sinh tổ hợp kế tiếp
    for (int i = k; i >= 1; --i) {
        if (next[i] < n - k + i) {
            next[i]++;
            for (int j = i + 1; j <= k; j++) {
                next[j] = next[j - 1] + 1;
            }
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << k << endl;
        return;
    }

    // Đếm số người trong input nhưng không có trong next
    int diff_count = 0;
    for (int i = 1; i <= k; i++) {
        if (find(next.begin() + 1, next.end(), input[i]) == next.end()) {
            diff_count++;
        }
    }
    cout << diff_count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
