class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0 , end = n-1;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid]==target){
                return mid;
            }
            //right side is sorted
            if(nums[mid] < nums[st]){
                // checks if target is present or not in sorted part
                if(target>nums[mid] && target<=nums[end]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
            // left side is sorted 
            else{
                // checks if target is present or not in sorted part
                if(nums[st]<=target && nums[mid]>target){
                    end = mid -1;
                }
                else{
                    st = mid + 1 ;
                }
            }
        }
        return -1;
        
    }
};