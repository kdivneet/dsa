class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums = nums1;
        nums.insert(nums.end(),nums2.begin(),nums2.end());
        int mid;
        float ans;

        sort(nums.begin(),nums.end());

        int len = nums.size();
        if(len%2==0)
        {
            int middle1= nums[len/2 -1];
            int middle2= nums[len/2];
            return(static_cast<double>(middle1)+ static_cast<double>(middle2))/2.0;
             
        }
        else
        {
            return static_cast<double>(nums[len/2]);
        }
    }
};