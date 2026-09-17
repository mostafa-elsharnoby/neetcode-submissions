class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]=i;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i])&&mp[target-nums[i]]!=i){
                int j=mp[target-nums[i]];
                if(j>i) return {i,j};
                else return {j,i}; 
            }
        }
        return {0,0};
    }
};
