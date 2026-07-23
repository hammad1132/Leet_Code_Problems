class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int pos=n-1,s=0,e=n-1;
        while(s<=e) {    
            if(abs(nums[s])>abs(nums[e]))
              {
                ans[pos]=(nums[s]*nums[s]);
                s++;
              }
              else
              {
                ans[pos]=(nums[e]*nums[e]);
                e--;
              }
              pos--;
        }
        return ans;
}
};