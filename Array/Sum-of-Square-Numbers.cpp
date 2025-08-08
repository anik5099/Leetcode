class Solution {
public:
    bool judgeSquareSum(int c) {
        int root = int(sqrt(c));
        for(int i=0; i<=root; i++){
            int x = i * i;
            int y = c - x;
            // cout << i << ' ' << y << endl;
            int root_y = sqrt(abs(y));
            if(x + root_y*root_y == c){
                return true;
            }
        }
        return false;
    }
};