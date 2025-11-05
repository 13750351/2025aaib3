///week09-2.cpp 學習計畫 Matrix 第四題
/// LeetCode 73. Set Matrix Zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ///第一步 憲找所有的0 而且記下他的位置
        int M = matrix.size(), N = matrix[0].size();
        vector<bool> markI(M), markJ(N); ///標記i 標記J

        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){ //遇到0記下
                    markI[i] = true; //i鰾記起來
                    markJ[j] = true; //j標記起來
               }
            }
        }
        ///第二步 把標記下來的 他的橫行mark[i],直行mark[j]都設成0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==true || markJ[j]==true) matrix[i][j]=0;
            }
        }
    }
};
