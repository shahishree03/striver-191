#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 1) {
            return {{1}};
        } else if (numRows == 2) {
            return {{1}, {1, 1}};
        } else {
            vector<vector<int>> g = {{1}, {1, 1}};
            for (int i = 3; i <= numRows; i++) {
                vector<int> temp;
                temp.push_back(1); // First element in each row is always 1
                for (int j = 1; j < i - 1; j++) {
                    temp.push_back(g[i - 2][j - 1] + g[i - 2][j]); // Sum of the two elements above
                }
                temp.push_back(1); // Last element in each row is always 1
                g.push_back(temp);
            }
            return g;
        }
    }
};

int main() {
    Solution s;
    vector<vector<int>> g = s.generate(5);
    for (int i = 0; i < g.size(); i++) {
        cout << "{ ";
        for (int j = 0; j < g[i].size(); j++) {
            cout << g[i][j];
            if (j < g[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << " }" << endl;
    }

    return 0;
}
