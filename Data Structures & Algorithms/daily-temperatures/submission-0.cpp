class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int,int>>st;
        vector<int>answer(n,0);

        for(int i=0;i<n;i++){
            if(st.empty()) st.push({temperatures[i],i});

            else if(st.top().first < temperatures[i]){
                while(!st.empty() && st.top().first < temperatures[i]){
                    answer[st.top().second]= i - st.top().second;
                    st.pop();
                }
                st.push({temperatures[i],i});
            }

            else{st.push({temperatures[i],i});}
        }
        return answer;
    }
};
