class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st = 1 ;
        int end = n - 2 ;
        if(n==1) return nums[0];
        while(st<=end){
            int mid = st + (end - st)/2;
            if(mid==1 && nums[mid]>nums[mid-1]){
            return nums[0];
        }
        if(mid==n-2 && nums[mid]<nums[mid+1]){
            return nums[n-1];
        }
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    end = mid -1 ;
                }
                else {
                    st = mid + 1 ;
                }
            }
            else {
                if(nums[mid]==nums[mid-1]){
                    st = mid + 1 ;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};