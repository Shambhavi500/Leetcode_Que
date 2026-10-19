class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;

        v.insert(v.end(),nums1.begin(),nums1.end());
        v.insert(v.end(),nums2.begin(),nums2.end());

        sort(v.begin(),v.end());
        int n=v.size();
        double sum;

        for(int i=0; i<v.size(); i++){
            if(n%2 == 0){
            sum=(v[n/2]+v[(n-1)/2])/2.0;
            }
            else{
            sum=v[n/2];
            }
        }
        return sum;
    }
};
