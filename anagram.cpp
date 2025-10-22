// C++ program to find minimum number of characters
// to be removed to make two strings anagram.
#include<bits/stdc++.h>
using namespace std;

int remAnagram(string& s1, string& s2) {
    
    unordered_map<char, int> map;

    for (char ch: s1) {
        map[ch]++;
    }

    for (char ch: s2) {
        map[ch]--;
    }

    int ans = 0;
    
    for (auto p: map)
        ans += abs(p.second);
        
    return ans;
}

int main() {
    string str1 = "bcadeh", str2 = "hea";
    cout << remAnagram(str1, str2);
    return 0;
}
