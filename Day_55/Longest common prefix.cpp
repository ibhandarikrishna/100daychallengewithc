class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        string ans="";
        string s1=strs[0];
        string s2=strs[1];
        string temp="";
        int j=0;
        while(s1.size()>j&&s2.size()>j){
            if(s1[j]==s2[j]){
                ans.push_back(s1[j]);
                j++;
            }
            else break;
        }
        temp=ans;
        for(int i=2;i<strs.size();++i){
            s1=ans;
            s2=strs[i];
            int k=0;
            string fun="";
            while(s1.size()>k&&s2.size()>k){
                if(s1[k]==s2[k]){
                    fun.push_back(s1[k]);
                    k++;
                }
                else break;
            }
            ans=fun;
            temp=fun;
        }
        return temp;
    }
};
