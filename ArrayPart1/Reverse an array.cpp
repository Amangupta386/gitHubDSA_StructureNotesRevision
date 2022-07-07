// link of 1st type
//https://practice.geeksforgeeks.org/problems/reverse-an-array/0#
#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
	return 0;
}

//link Of 2nd type question
//https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298
void reverseArray(vector<int> &arr , int m)
{
    //s = 0
    int s = m+1, e = arr.size()-1;
    while (s<=e)
    {
//         if( m < s ){
        swap(arr[s], arr[e]);
        s++;
        e--;
//         }
    }
}
