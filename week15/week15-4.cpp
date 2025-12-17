///week15-4.cpp 學習計畫 Basic最後一題
///LeetCode 13. Roman to Integer 羅馬數字變成int
class Solution {
public:
    int Table(char c) {
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s){
        int ans = 0;
        int prev = 2000; //一定不會相同更大的數字(擔心倒裝句))
        for(int i=0;i<s.length(); i++){
            /// ans += Table( s[i] ); ///把字母s[i]丟入Table函示
            ///這是錯誤的版本 答案會太大 因為 如只有倒裝句就會反過來
            int now = Table( s[i] );
            if(prev < now)ans = ans + now - prev - prev; ///倒裝句發生了
            else ans += now; ///正常接家法
            prev = now; ///現在數字變成前依據
        } ///現在變成正值版本了
        return ans;
    }
};
