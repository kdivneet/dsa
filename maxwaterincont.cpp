class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;

        int maximum=0;
        
        while(i<j)
        {
            int area= (j-i)*min(height[j],height[i]);
            maximum=max(area,maximum);
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maximum;

    }
};