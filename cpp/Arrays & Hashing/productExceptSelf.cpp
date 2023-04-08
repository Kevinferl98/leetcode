class Solution{
public:
    vector<int> productExceptSelf(vector<int>& nums){
        vector<int> prefix(nums.size(), 1);
        vector<int> postfix(nums.size(), 1);

        for(int i=0; i<nums.size(); i++){
            if(i==0)
                prefix[i] = nums[i];
            else
                prefix[i] = nums[i]*prefix[i-1];
        }
        for(int i=nums.size(); i>=0; i--){
            if(i==nums.size()-1)
                postfix[i] = nums[i];
            else
                postfix[i] = nums[i]*postfix[i+1];
        }
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(i==0)
                res.push_back(postfix[i+1]);
            else if(i==nums.size()-1)
                res.push_back(prefix[i-1]);
            else
                res.push_back(prefix[i-1]*postfix[i+1]);
        }
        return res;
    }
};