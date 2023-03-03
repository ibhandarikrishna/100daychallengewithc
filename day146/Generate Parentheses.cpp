class Solution {
public:
    void solve(int opening,int closing,string str,vector<string>&ans){
        if(opening==0 && closing==0){
            ans.push_back(str);
            return;
        }
        if(opening!=0){
            solve(opening-1,closing,str+"(",ans);
        }
        if(opening<closing){ //closing
            solve(opening,closing-1,str+")",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n,n,"",ans);
        return ans;
    }
};
