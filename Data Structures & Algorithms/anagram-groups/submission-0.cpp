class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_map;

        for (string& word : strs) {
            string key = word;
            sort(key.begin(), key.end());  
            anagram_map[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto& pair : anagram_map) {
            result.push_back(pair.second);
        }

        return result;
    }
};
