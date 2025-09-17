//week02-3.cpp Leetcode 學習計畫
/// 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int N1 = word1.length(); ///字串長度
        int N2 = word2.length();
        string ans;  ///答案字串 一開始沒有東西
        for(int i=0; i<max(N1,N2) ;i++){
            if(i<N1) ans += word1[i];
            if(i<N2) ans += word2[i];
        }
        return ans; //把答案傳出去 結果

    }
};
