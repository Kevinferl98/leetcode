class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.length()!=t.length())
                return false;
        
            unordered_map<char, int> temp;
        
            for(int i=0; i<s.length(); i++)
                temp[s[i]]++;
        
            for(int i=0; i<t.length(); i++)
                temp[t[i]]--;
        
            for(auto i : temp)
                if(i.second!=0)
                    return false;
            return true;
        }
};