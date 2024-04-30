#include <bits/stdc++.h>

using namespace std;


vector<string> generateSubsequences(const string& str, string current, int index, int length) {
    vector<string> result;

    
    if (length == 0) {
        result.push_back(current);
        return result;
    }

    if (index == str.length()) {
        return result;
    }

    
    vector<string> withCurrent = generateSubsequences(str, current + str[index], index + 1, length - 1);
    result.insert(result.end(), withCurrent.begin(), withCurrent.end());


    vector<string> withoutCurrent = generateSubsequences(str, current, index + 1, length);
    result.insert(result.end(), withoutCurrent.begin(), withoutCurrent.end());

    return result;
}

int main() {
    string str = "abcde";
    vector<string> subsequences;

    for (int i = 1; i <= 4; ++i) {
        vector<string> subs = generateSubsequences(str, "", 0, i);
        subsequences.insert(subsequences.end(), subs.begin(), subs.end());
    }

    for (const auto& subsequence : subsequences) {
        cout << subsequence << endl;
    }

    return 0;
}
