class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int arr[2];
        for(int i =0;i<nums.size()-1;i++){
            for(int j=1;j<nums.size();j++){
                if(i!=j && nums[i]+nums[j]==target)
                    return {i,j};
                }       
        }
        return {};
    }
};
