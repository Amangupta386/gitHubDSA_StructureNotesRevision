#include<bits/stdc++.h>
char tolowercase(char ch){
    if(ch>='a' && ch<='z' || (ch>=0 && ch<=9 ))
        return ch;
    else{
        ch=ch-'A'+'a';
        return ch;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
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
// Babbar Approach
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s);
int main(){
	string s = "Noons";
	bool a = checkPalindrome(s);
	cout<<a;
}
char toLowerCase(char ch){
    if(ch>='a' && ch<='z' || (ch>=0 && ch<=9 ))
        return ch;
    else{
        ch=ch-'A'+'a';
        return ch;
    }
}


bool checkPalindrome(string s){
     int s1 = 0;
     int n = s.size(); 
     int e = n-1;
     while( s1<=e ){
         if( toLowerCase(s[s1]) != toLowerCase(s[e]) ){
             return 0;
          }
          else{
              s1++;
              e--;
          }
     }
    return 1;
}
