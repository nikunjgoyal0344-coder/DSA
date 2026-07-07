class Solution {
public:
    void subsets(vector<int>& nums , vector<int> ans , int i ,vector<vector<int>> &allsubset ){
        // returns all subset with duplicate 
        if(i==nums.size()){
            allsubset.push_back({ans});
              return;   
        }
        // inclusion as same as allsubsets
        ans.push_back(nums[i]);
        subsets(nums , ans , i+1,allsubset);
        // backtracting
        ans.pop_back();
        // excelusion use index to elaminate all repearting values in sorted arr
        int idex = i+1;
        while(idex < nums.size() && nums[idex]==nums[idex-1]){
            idex++;
        }
        subsets(nums , ans ,idex,allsubset);


    } 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsubset;
        vector<int> ans;
        subsets(nums , ans , 0,allsubset);
        return allsubset;

        
    }
};