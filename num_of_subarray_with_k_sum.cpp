#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int kSubArraySum(vector<int>& input, int& k) {
    int prefix_sum = 0;
    int count = 0;
    unordered_map<int, int> sumFrequency;
    sumFrequency.insert({0, 1});
    for(auto i : input) {
        prefix_sum += i;

        if (sumFrequency[prefix_sum - k]) {
            count += sumFrequency[prefix_sum - k];
        }
        
        sumFrequency[prefix_sum]++;
    }
    
    return count;
}

int main() {
    vector<int> test_input = {1, 2, 3, 4, 5, 5, 10, -5};
    int k_sum = 10;
    int result = kSubArraySum(test_input, k_sum);
    cout << "Result = " << result;
    return 0;
}
