#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // read in the arrays
    vector<vector<int>> arrays(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            arrays[i].push_back(x);
        }
    }

    // process the queries
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        if (x >= n || y >= arrays[x].size()) {
            cout << "ERROR!" << endl;
        } else {
            cout << arrays[x][y] << endl;
        }
    }

    return 0;
}
