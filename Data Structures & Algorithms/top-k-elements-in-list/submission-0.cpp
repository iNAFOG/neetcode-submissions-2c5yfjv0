class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // 1. Count frequency
        for (int num : nums) {
            freq[num]++;
        }

        // 2. Make buckets: index = frequency
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& p : freq) {
            int number = p.first;
            int count = p.second;
            bucket[count].push_back(number);
        }

        // 3. Collect top k elements from highest freq down
        vector<int> result;
        for (int i = bucket.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k)
                    break;
            }
        }

        return result;
    }
};
