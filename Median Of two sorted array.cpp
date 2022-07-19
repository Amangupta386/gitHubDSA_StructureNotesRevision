//BruteForce but Not Valid
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int sum = n+m;
        double arr[sum];
        for(int i = 0; i<sum; i++){
            if( i < n ){
                arr[i] = nums1[i];
            }
            else if(sum%2){
                arr[i] = nums2[i-m-1];
            }
            else{
                arr[i] = nums2[i-m];
            }
        }
        
        sort(arr, arr + sum);
        double mid;
        if(nums1.empty() && m==1){
            mid = m/2.0;
            return nums2[mid];
        }
        
        if(sum%2==0){
            int num1 = sum/2;
            int num2 = num1-1;
            mid = (arr[num1]+arr[num2])/2.0;
            return mid;
        }
        else{
            int num = sum/2;
            mid = arr[num];
            return mid;
        }
    }
};
// Two Pointer Approach
