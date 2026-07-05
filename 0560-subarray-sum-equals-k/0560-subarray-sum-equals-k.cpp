class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
                               // brutefroce method
        // int count = 0 ;
        // for( int st = 0 ; st < n ; st++){
        //     int sum = 0 ;
        //     for( int end = st ; end < n ; end++){
        //         sum+=nums[end];
        //         if(sum == k ){count++;}
        //     }
        // }
        // return count;
        int count = 0 ;
        vector<int> prearrSum(n,0);
        // to find the arr of holding sums of privious one 
        prearrSum[0] = nums[0];
        for( int i = 1 ; i < n ; i++ ){
            prearrSum[i] = prearrSum[i-1] + nums[i];
        }
        // make a unordered map to store the freq of ans and then add them to our count 
        unordered_map<int,int> m;
        for(int j = 0 ; j < n ; j++){
            if(prearrSum[j] == k){
                count++;
            }
            int val = prearrSum[j] - k;
            if(m.find(val)!= m.end()){
                count += m[val];
            }
            m[prearrSum[j]]++;
            
        }
        return count;
    }
};