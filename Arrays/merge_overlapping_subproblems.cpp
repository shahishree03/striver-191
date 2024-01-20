#include<vector>
#include <iostream>
#include<algorithm>

vector<int> merge(vector<int> &a, vector<int> &b) {
    return {a[0], max(a[1], b[1])};
}

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &m){
	 if (m.empty()) {
        return {};
    }

    sort(m.begin(), m.end(), [](const vector<int> &v1, const vector<int> &v2) {
        return v1[0] < v2[0];
    });

    vector<vector<int>> result;
    result.push_back(m[0]);

    for (int i = 1; i < m.size(); i++) {
        if (result.back()[1] >= m[i][0]) {
            result.back() = merge(result.back(), m[i]);
        } else {
            result.push_back(m[i]);
        }
    }

    m = move(result);
    return m;
}
