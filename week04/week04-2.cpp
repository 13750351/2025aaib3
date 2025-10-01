///week04-2.cpp
///更多 vector<int> a 的出初始化 (裡面要放甚麼值)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(3); ///初始的長度3 裡面都放0
    vector<int> b(3,88);///初始的長度3 裡面都放88

    int c[10] = {1,2,3,9,8,7,4,5,7}; ///c語言的陣列宣告 初始值

    vector<int> d(c,c+3);///從哪裡開始 到哪裡結束 陣列c開始 再移3結束格
    for(int i=0;i<d.size();i++)cout << d[i] << " ";
    cout << "這是c語言的陣列輔助 幫助 c++陣列的初始化一堆值\n\n";

    vector<int> e(c,c+10);///從哪裡開始 到哪裡結束 陣列c開始 再移10格結束
    for(int i=0;i<e.size();i++)cout <<e[i] << " ";
    cout << "這也是c語言的陣列輔助 幫助 c++陣列的初始化一堆值\n\n";

}
