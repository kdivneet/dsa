class Solution {
public:

    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int len=bloomDay.size();
        int min= *min_element(bloomDay.begin(),bloomDay.end());
        int max= *max_element(bloomDay.begin(),bloomDay.end());
       int low=min;
       int high=max;
       int mid;
       int ans=-1;
       while(low<=high)
       {
             mid=low+(high-low)/2;
             if(possible(bloomDay,mid,m,k)==true)
             {
                ans=mid;
                high=mid-1;
             }
             else
             {
                low=mid+1;
             }
             
       }
       return ans;
    }
    private:
        bool possible(vector<int>& nums,int i, int m, int k)
    {
        int ctr=0;
        int total=0;
       for(int j=0;j<nums.size();j++)
       {
        if(nums[j]<=i)
        {
            ctr++;
        }
        else
        {
          total=total+(ctr/k);
          ctr=0;
        }
    
       }
       total=total+(ctr/k);
         if(total>=m)
        {
            return true;
        }
        return false;
    }
};