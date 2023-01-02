class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cum=n/3;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto it:nums){
         mp[it]++;
        }
        for(auto it:mp){
            if(it.second>cum){
              ans.push_back(it.first);
            }
        }
 return ans;   }
};
