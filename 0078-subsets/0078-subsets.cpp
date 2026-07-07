class Solution {
public:
    void Allsubsets(vector<int> &arr, vector<int> &ans , int i,vector<vector<int>> &all_subs){
        if(i == arr.size()){
            all_subs.push_back({ans});
            return ;
        }
        //inclusion
        ans.push_back(arr[i]);
        Allsubsets(arr,ans,i+1,all_subs);
        //to remove added element 
        ans.pop_back();
        // exculsion
        Allsubsets(arr,ans,i+1,all_subs);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> all_subs;
        vector<int> ans;
        Allsubsets(nums,ans,0,all_subs);
        return all_subs;

        
    }
};