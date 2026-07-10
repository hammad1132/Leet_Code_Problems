
class Solution {
public:
    int n, m;
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};
        
        vector<int> result;
        m = mat.size();
        n = mat[0].size();
        int d = m + n - 1; // number of diagonals

        for (int i = 0; i < d; i++) {
            if (i & 1) // odd diagonal -> downward (row increases)
            {    
                // x cannot be smaller than 0, and y (i - x) cannot exceed n - 1 -> x >= i - (n - 1)
                int start_x = max(0, i - (n - 1));
                // x cannot exceed m - 1, and x cannot be greater than i
                int end_x = min(m - 1, i);
                
                for (int x = start_x; x <= end_x; x++) {
                    result.push_back(mat[x][i - x]);
                }
            } 
            else // even diagonal -> upward (row decreases)
            {      
                int start_x = min(m - 1, i);
                int end_x = max(0, i - (n - 1));
                
                for (int x = start_x; x >= end_x; x--) {
                    result.push_back(mat[x][i - x]);
                }
            }
        }
        return result;
    }
};

