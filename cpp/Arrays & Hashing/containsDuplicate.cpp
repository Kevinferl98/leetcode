class Solution{
    public:
        bool containsDuplicate(vector<int>& nums){
            unordered_set<int> tab;

            for(int i=0; i<nums.size(); i++){
                if(tab.find(nums[i])!=tab.end())
                    return true;
                else
                    tab.insert(nums[i]);
            }  
            return false;
        }
};