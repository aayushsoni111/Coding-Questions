#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string findLongestSubstringWithoutRepeatingChar(string input) {
    int left = 0;
    int right = 0;
    int maxLen = 0;
    int startIndex = 0;
    unordered_map<char, int> recentPosofChar;
    for (int right = 0; right < input.size(); right++) {
        if((recentPosofChar.find(input[right]) != recentPosofChar.end()) && (recentPosofChar[input[right]] >= left)){

            if(maxLen < (right - left)) {
                maxLen = right - left;
                startIndex = left;
            }
            left=recentPosofChar[input[right]] + 1;
        }
        recentPosofChar[input[right]] = right;
    }

    if ((int)input.size() - left > maxLen) {
        maxLen = input.size() - left;
        startIndex = left;
    }

    return input.substr(startIndex, maxLen);
}


int main() {
    string test_input = "acdefgannnnsnsabcdefghij";
    string result = findLongestSubstringWithoutRepeatingChar(test_input);
    cout << "Longest sub string : " << result;
} 
