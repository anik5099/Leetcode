class Solution {
public:
    
    int findKthPositive(vector<int>& arr, int k) {
        int ans = 0;
        int count = 0;

        for(int i=1; i<=2500 and count != k; i++){
            bool exist = binary_search(arr.begin(), arr.end(), i);
            if(!exist){
                count++;
                ans = i;
            }
        }
        return ans;
    }
};