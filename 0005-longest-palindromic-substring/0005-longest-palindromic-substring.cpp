class Solution {
public:
    string longestPalindrome(string s) {
         int len = 0; string res ="";
         for(int i=0; i<s.length(); i++){
            int left=i; int right =i; int count=0;
            while(left>=0 && right<s.length()){
                if(s[left]==s[right]) {count++; left--; right++;}
                else {
                    if(count>=len){
                        len=count; res=s.substr(left+1, right-left-1);
                    }
                    break;
                }
            }
            if(count>=len){len=count; res=s.substr(left+1, right-left-1); }
         }

          for(int i=0; i<s.length(); i++){
            int left=i; int right =i+1; int count=0;
            while(left>=0 && right<s.length()){
                if(s[left]==s[right]) {count++; left--; right++;}
                else {
                    if(count>=len){
                        len=count; res=s.substr(left+1, right-left-1);
                    }
                    break;
                }
            }
            if(count>=len){len=count; res=s.substr(left+1, right-left-1); }
         }


         return res;
    }
};