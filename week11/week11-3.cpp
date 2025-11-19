///week11-3.cpp 學習計畫 Math 倒數第三題 二進位加法 一萬位
///LeetCode 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j = b.length() - 1; ///字串長度
        vector<int> ans; /// 伸縮自如的陣列 把答案望進去
        int carry = 0; // 進位的部分
        while( i >=0 || j>=0  ){ /// 要一直做加法 從右邊的低位數 往左邊的高位數加法
            int now = carry; /// 現在的這個位數 (進偽藥加進來)
            if(i>=0){ ///字串a還可以做加法
                now += a[i] - '0'; // 字串字母a[i] 脫掉字母的外皮 變數直
                i--; /// 往左一位
            }
            if(j>=0){
                now += b[j] - '0'; /// 字母變數值
                j--; ///往左一位
            }
            ans.push_back( now %2 ); /// 把二進位的個位數 記在ans
            carry = now / 2; ///新進位的部分
        }
        if(carry > 0) ans.push_back(carry); ///離開迴圈 直視加法 加完字串後 還有進位!!!在記的ans
        string strAns = ""; ///最後呢 需要嘬出自串 當答案
        for(int i=ans.size()-1; i>=0;i--){ /// 到過來的迴圈 因為ans裡面 是記個位 十位 .......倒過來
            strAns = strAns + (char)(ans[i]+'0'); /// 把數字倒過來 在加到字串裡面
        }
        return strAns;

    }
};
