class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hashmap;
        for(string &s : strs){
            string sorted = s;
            sort(sorted.begin(),sorted.end());
            hashmap[sorted].push_back(s);
        }
        
        vector<vector<string>> answer;
        for(auto & pair : hashmap){
            answer.push_back(pair.second);
        }
        return answer;
    }
};
