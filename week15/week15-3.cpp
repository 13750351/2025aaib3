///week15-3.cpp 學習計畫 Basic
///LeetCode 459. Repeated Substring Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        ///解法卻很簡單 把s+s的頭尾各扣一個字母
        //再找看看裡面有沒有s本身
        string s2 = s + s;
        string s3 = s2.substr(1,s2.length()-2);
        return s3.find(s) != string::npos;
    } ///寫不出來這一題 因為用到很多進階觀念 技巧 韓式
};
