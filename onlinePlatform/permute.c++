class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>& ans,int index){
        int n = nums.size();
        //basecase
        if(index>=n){
            ans.push_back(nums);
            return ;
        }
        for(int j = index;j<n;j++){
            swap(nums[j],nums[index]);
            solve(nums,ans,index+1);
            swap(nums[j],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        //int n = nums.size()-1;
        vector<vector<int>>ans;

        solve(nums,ans,index);

        return ans;
    }
};
