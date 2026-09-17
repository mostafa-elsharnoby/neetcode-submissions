class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]=i;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i])&&mp[target-nums[i]]!=i){
                int j=mp[target-nums[i]];
                return  (j>i)?vector<int>{i,j}:vector<int>{j,i}; 
            }
        }
        return {0,0};
    }
};
