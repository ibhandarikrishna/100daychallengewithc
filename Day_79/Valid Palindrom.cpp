class Solution {
public:
    char toAlnum(char ch){
        if((int(ch) >=97 && int(ch)<= 122) || (int(ch) >=65 && int(ch)<= 90) || (int(ch) >=48 && int(ch)<= 57)){
            char rtn = (int(ch)> 90 || int(ch) <= 57)? ch:char(int(ch) +32);
            return rtn;
        }
        return '#';
    }
    bool isPalindrome(string s) {
        int i1 = 0, i2 = s.length()-1;
        while(i1 < i2){
            char tmp1 = toAlnum(s[i1]);
            char tmp2 = toAlnum(s[i2]);
            if(tmp2 == '#') i2--;
            if(tmp1 == '#') i1++;
            if(tmp1 != '#' && tmp2 != '#') {
                if(tmp1 != tmp2) return false;
                i1++;
                i2--;
            }
        }
        return true;
    }
};
