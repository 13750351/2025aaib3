///week13-4.cpp 聖誕節數寫程式  Advent of Code
///第一題----Day 1 : Secret Entrance
///我們利用 LeeCode 有個功能 My Playground 我們的遊戲場 可以寫程式
///LeetCode 會幫我們#inlude 全部的東西 所以前面計算都不用寫

int main() {
        char c; ///每一行有一段英文
        int d; ///有一個數字
        int now = 50; //現在的刻度是在50
        int ans = 0; //刻度有 指到幾次0
        while( cin >> c>> d){
            //if( c=='L') cout << "往左轉" << d << "格\n";
            //if( c=='R') cout << "往右轉" << d << "格\n";

           if(c=='L') now -= d; //往左轉 減掉他
           if(c=='R') now += d; //往右轉 加上他

            now = (now %100+100)%100; //取餘數 +100 再取餘數 得到0-99間
            if(now==0) ans++; //刻度指到0

            //cout << "現在到達格子刻度" << now << "\n";
        }
    cout << "答案是: " << ans;
}
///先把題目的 input  貼到右下角
