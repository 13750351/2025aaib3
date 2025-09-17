///week02-2.cpp
///要用 c++的字串 反過來
#include <iostream> ///iO串流外掛
#include <string> ///字串外掛
using namespace std;

int main()
{
    cout << "請輸入數子: ";
    string a, ans; /// c++的字串
    cin >>a; ///讀入字串
    ///到過來的迴圈
    for(int i=a.length()-1; i>=0;i--){
        ans += a[i]; ///字母倒過來放熱答案
    }

    cout << a<< ans;

}
