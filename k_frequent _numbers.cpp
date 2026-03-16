#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

// TODO: Add efficient algorithm using priority queues

vector<int> kFrequentNumbers(vector<int>& input, size_t& k){
    unordered_map<int, int> frequency;
    vector<pair<int, int>> kFreqVec;
    vector<int> result;
    for (int i : input) {
        frequency[i]++;
    }
    for (auto i : frequency){
        kFreqVec.push_back(i);
    }
    sort(kFreqVec.begin(), kFreqVec.end(), [](const auto& a, const auto& b){return a.second>b.second;});

    if (k < kFreqVec.size()) {
        kFreqVec.erase(kFreqVec.begin() + k, kFreqVec.end());
    }
    
    for (auto i : kFreqVec){
        result.push_back(i.first);
    }
    
    return result;
}

int main() {
    vector<int> test_input = {1, 2, 3, 4, 5, 6, 1, 6};
    size_t k_freq_numbers = 5;
    vector<int> result = kFrequentNumbers(test_input, k_freq_numbers);
    cout << "Result = ";
    for (int i : result) {
        cout << " " << i;
    }
    return 0;
}
