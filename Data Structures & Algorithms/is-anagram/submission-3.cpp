class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m)return false;
        unordered_map<char,int>sfreq;
        unordered_map<char,int>tfreq;

        for(int i=0;i<n;i++)
        {
            sfreq[s[i]]++;
            tfreq[t[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(tfreq[t[i]]!=sfreq[t[i]]) return false;
        }
        return true;
    }
};
