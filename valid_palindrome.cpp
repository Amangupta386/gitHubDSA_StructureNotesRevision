class Solution {
public:
    
char tolowercase(char ch){
    if(ch>='a' && ch<='z' )
        return ch;
    else{
        ch=ch-'A'+'a';
        return ch;
    }
}
    bool isPalindrome(string s) {
        
    int i=0,j=s.length()-1;
    while(i<=j){
        if(isalnum(s[i])==0)
            i++;
        else if(isalnum(s[j])==0)
            j--;
        else if(tolowercase(s[i])!=tolowercase(s[j]))
            return false;
        else{
            i++;
            j--;
        }
    }
    return true;
    }
};
