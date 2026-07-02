class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        int strow = 0, stcol = 0;
        int endrow = r - 1, endcol = c - 1;
        vector<int> a;
        while (strow <= endrow && stcol <= endcol) {
            // for top
            for (int i = stcol; i <= endcol; i++) {
                a.push_back(mat[strow][i]);
            }
            // for right
            for (int i = strow + 1; i <= endrow; i++) {
                a.push_back(mat[i][endcol]);
            }
            // for bottom
            for (int i = endcol - 1; i >= stcol; i--) {
                if (strow == endrow) {
                    break;
                }
                a.push_back(mat[endrow][i]);
            }
            // for left
            for (int i = endrow - 1; i >= strow + 1; i--) {
                if (endcol == stcol) {
                    break;
                }
                a.push_back(mat[i][stcol]);
            }
            strow++, endrow--;
            stcol++, endcol--;
        }
        return a;
    }
    };