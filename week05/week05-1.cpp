///week05-1.cpp
/// leetcode 學習計畫 58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); ///把字串string 當 iostream 的 cin 來用
        string word; //字串
        ///ss >> word; ///像是cin >> word一樣 現在的ss可以用 ss >> word
        ///ss >> word;
        while(ss >> word){ ///一直讀 獨到不能獨為止
            //裡面甚麼都沒有
        }
        cout << word;///先做一個實驗

        return word.length(); /// 最後把長度送出去

    }
};
