class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> ans;
        unordered_set<int> s;
        int expected_sum = (n*n) * (n*n+1)/2 ; 
        int actual_sum = 0;

        int missing , repeated;
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < n ; j++){
                actual_sum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    ans.push_back(grid[i][j]);
                    repeated = grid[i][j];
                }
                s.insert(grid[i][j]);
            }
        }
        missing = expected_sum - actual_sum + repeated;
        ans.push_back(missing);
        
        return ans;
    }
};