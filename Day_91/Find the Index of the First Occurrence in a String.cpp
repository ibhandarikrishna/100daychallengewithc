class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos,res=1000;
        for(int i=0; i<haystack.size(); i++) {
            if(haystack[i]==needle[0]) {
                if(needle.size()==1) {
                    return i;
                }
                for(int k=1; k<needle.size(); k++) {
                    if(haystack[i+k]==needle[k]) {
                        pos=1;
                    }
                    else {
                        pos=-1;
                        break;
                    }
                }
            }
            if(pos==1) {
                res=min(res,i);
            }
        }
        if(res!=1000) {
            return res;
        }
        else {
            return -1;
        }
        
    }
};
