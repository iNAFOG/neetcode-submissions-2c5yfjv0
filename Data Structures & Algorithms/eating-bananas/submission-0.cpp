class Solution {
public:
    
    bool ispossible(vector<int>& piles, int mid, int n, int h){
        int time = 0;
        for(int i = 0; i < n; i++){
            int cal = (piles[i] + mid - 1) / mid; // correct ceil
            time += cal;
        }
        return time <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int low = 1;  // important
        int high = *max_element(piles.begin(), piles.end());
        
        int answer = high;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(ispossible(piles, mid, n, h)){
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return answer;
    }
};