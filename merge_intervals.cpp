#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& input) {
    vector<vector<int>>result;

    sort(input.begin(), input.end());

    for(int i = 0; i < input.size(); i++) {
        if (i == 0) {
            result.push_back(input[i]);
            continue;
        }
        if(result.back()[1] >= input[i][0]) {
            result.back()[1] = max(result.back()[1], input[i][1]);
        } else {
            result.push_back(input[i]);
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> test_input = {{1, 5}, {2, 3}, {4, 8}};

    auto result = mergeIntervals(test_input);

    cout << "Result = ";
    for(auto i : result) {
        cout << " [" << i[0] << "," << i[1] << "] ";
    }

    return 0;
}
