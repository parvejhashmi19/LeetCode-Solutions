class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater = 0;
        int start =0 , end = n-1; 
        

        while(start<end){
            int width = end-start;
            int heightt = min(height[start],height[end]);
            int currentWater = width*heightt;
             maxWater = max(maxWater,currentWater);
            
            height[start]<height[end]? start++ : end--;
        }
        return maxWater;
    }
};