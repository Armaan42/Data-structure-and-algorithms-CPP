class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";
    
            sort(strs.begin(), strs.end());
    
            string string_first = strs[0];
            string string_last = strs[strs.size() - 1];
            string prefix = "";
    
            for(int i=0; i<string_first.size(); i++){
                if(string_first[i] == string_last[i]){
                    prefix = prefix + string_first[i];
                }
                else{
                    break;
                }
            }
        return prefix;
        }
    };