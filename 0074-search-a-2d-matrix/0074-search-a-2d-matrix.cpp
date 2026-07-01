class Solution {
public:
    bool rowsearch(vector<vector<int>>& mat, int target, int mid){
        int n = mat.size(), m = mat[0].size(); 
        bool ans = false;
        int start = 0, end = m-1;
        while (start <= end) {
            int mid_2 = start + (end - start) / 2;
            if (mat[mid][mid_2] == target) {
                return true;
            } else if (mat[mid][mid_2] < target) {
                start = mid_2 + 1;
            } else {
                end = mid_2 - 1;
            }
        } 
        return false;
        
    }


    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size(), m = mat[0].size();
        int sR = 0, endR = n - 1;
        while (sR <= endR) {
            int mid = sR + (endR - sR) / 2;
            if (target >= mat[mid][0] && target <= mat[mid][m - 1]) {
                // bs serach in perticular row
                return rowsearch(mat, target, mid);
            } else if (target < mat[mid][0]) {
                endR = mid - 1;
            } else {
                sR = mid + 1;
            }
            
        }
    return false;
    }
};