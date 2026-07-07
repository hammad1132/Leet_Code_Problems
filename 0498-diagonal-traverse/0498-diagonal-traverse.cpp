class Solution {
public:
int n,m;
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> result;
        m = mat.size();
        n = mat[0].size();
        int d=m+n-1;//no of diagonals

        for(int i=0;i<d;i++) {
            if (i & 1) // odd
            {    // print downward
               for(int x=0;x<=i;x++)
               { int y=i-x;
               if(valid(x,y))
               {
               result.push_back(mat[x][y]);
               }
             }

            }
             else // even
            {      // print upwards
                 for(int x=i;x>=0;x--)
                 { int y=i-x;
                 if(valid(x,y)){
                 result.push_back(mat[x][y]);
                 }
             }
            }
        }return result;
    }
    private: bool valid(int x,int y)
    {return(x<m && y<n && x>=0 && y>=0);
    }
};