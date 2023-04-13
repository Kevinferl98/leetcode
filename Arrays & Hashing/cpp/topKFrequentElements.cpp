class Solution{
public:
    vector<int> topKfrequent(vector<int>& nums, int k){
        unordered_map<int, int> map;
        vector<vector<int>> freq(nums.size()+1);

        for(int n: nums){
            map[n]++;
        }
        for(auto it=map.begin(); it!=map.end(); it++){
            freq[it->first].push_back(it->second);
        }
        vector<int> res;
        bool flag = false;
        for(int i=freq.size()-1; i>=0; i--){
            for(int c: freq[i]){
                res.push_back(c);
                if(res.size()==k){
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        return res;
    }
};
