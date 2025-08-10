class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int ans = 0;
        while(left <= right){
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = h * w;
            ans = max(ans, area);
            if(height[right] > height[left]){
                // ans = area;
                left++;
            }
            else{
                right--;
            }

        }
        return ans;
    }
};