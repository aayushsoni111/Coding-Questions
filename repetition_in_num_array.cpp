#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool hasRepetition(vector<int>& input){
    unordered_set<int> visited;
    for (int i : input) {
        if(!visited.insert(i).second) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> test_input = {1, 2, 3, 4, 5, 6, 1};
    bool result = hasRepetition(test_input);
    cout << "Result = " << result;
    return 0;
}
