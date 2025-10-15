///week06-1.cpp
///學習計畫  242. Valid Anagram
///給你2個字串 判斷字母是否相同(可換順序)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.length() != t.length() ) return false; // 不同直接失敗

        ///\先把字串 s 字母累積一下
        int R[26] = {};///要先有一個回收桶 來分類放字母
        for(int i=0;i<s.length();i++){
            char c = s[i] - 'a'; /// 本來是小寫字母 但是變成0-25所以要減掉'a'
            R[c]++;
        }
        ///再把剛剛累積的字母 看t用到那些 劃掉 剛好用完(不能用超過)
        for(int i=0; i<t.length();i++){
            char c =t[i] - 'a';
            R[c]--; // 用掉他
            if(R[c]<0) return false;//不夠用就失敗
        }
        return true;
    }
};
