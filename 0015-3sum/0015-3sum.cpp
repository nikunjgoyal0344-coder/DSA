class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans ;
        sort(nums.begin(),nums.end());


        for(int i  = 0 ; i < n ; i++){
            if( i > 0 and nums[i]==nums[i-1]){
                continue;
            }
            int st = i+1 , end = n-1;
            while( st < end){
                int sum = nums[i] + nums[st] + nums[end];
                if(sum == 0){
                    ans.push_back({nums[i] , nums[st] , nums[end]});
                    st++,end--;
                    while(st < end and nums[st]==nums[st-1]){
                        st++;
                    }
                }
                else if( sum < 0){
                    st++;
                }
                else {
                    end--;
                }
            }
        }
        return ans;
        
    }
};