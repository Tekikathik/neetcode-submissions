class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int c=0;
        int left=0;
        int right=0;
        while(i<j){
            left=max(left,height[i]);
            right=max(right,height[j]);
            if (left<=right){
                c+=(left-height[i]);
                i++;
            }
            else {
                c+=(right-height[j]);
                j--;
            }
        }
        return c;
        
    }
};
