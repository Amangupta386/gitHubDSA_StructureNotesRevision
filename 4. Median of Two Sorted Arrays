class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a = nums1;
        vector<int>b = nums2;
        if(a.size() > b.size()){
            vector<int>temp = a;
            a = b;
            b = temp;
        }
    
        int lo = 0;
        int hi = a.size();
        int te = a.size()+b.size();
    
        while(lo <= hi){
            int aleft = (lo+hi)/2;// mid = 2
            int bleft = (te+1)/2 - aleft;// 7 - mid =5
        
            // if array e.g.
            //INT_MIN--2,3,4,5,6|INT_MAX
            //INT_MAX 7|,8,9,10,11 INT_MAX
            
            int alm1 = (aleft == 0) ? INT_MIN : a[aleft-1];
            //1st array left end = 0, treated as -infinity
            
            int al = (aleft == a.size()) ? INT_MAX : a[aleft];
            // 1st array right m ab koi element nahi hain then treated as +infinity
            
            int blm1 = (bleft == 0) ? INT_MIN : b[bleft-1];
            // 2nd array left end = 0, treated as -infinity
            
            int bl = (bleft == b.size()) ? INT_MAX : b[bleft];
            // 2nd array right m ab koi element nahi hain then treated as +infinity
        
        //valid segregation
            if(alm1 <= bl && blm1 <= al ){
                double median;
        
                if( te%2 == 0 ){
                    int lmax = max(alm1, blm1);
                    int rmin = min(al, bl);
                    median = ( lmax+rmin ) / 2.0;
                }
                else{
                    //odd case hain
                    //3, 9, 12, 13, 14 
                    //7, '17'(Max) | 20, 24, 26, 28, 30, 32
                    int lmax = max(alm1, blm1);
                    //a[1],b[5]
                    median = lmax;
                } 
            
                return median;
            }
            
            //yadi 1st if conditions m se kisi ek ne dhoka de diya... 
            else if(alm1 > bl){
                //high of peeche leke aana
                hi = aleft - 1;
            }
            else if( blm1 > al ){
                //yadi segregation right m shift karna hain
                lo = aleft + 1;
            }   
        }
    return 0;
    }
};
