class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int i,j;
        for(auto i: nums1)
            v.push_back(i);
        
        for(auto j: nums2)
            v.push_back(j);
        
        sort(v.begin(),v.end());
        
        int n = v.size();
        
        // int res = 0;
        // if(n % 2 == 0){
        //     res = (v[n/2-1]+v[n/2])/2.0;
        // }
        // else
        //     res = v[n/2];     
        return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;      
    }
};
// n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;