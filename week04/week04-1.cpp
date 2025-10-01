///week04-1.cpp
/// 複習 vector <int> a

#include <iostream>
#include <vector>
using namespace std;
int main()
{

        vector<int> a; ///上週交的 伸縮自如 的陳列
        cout << "沒有初始化a的長度是" << a.size() << endl; ///一開始大小是0
        a.push_back (99);
        cout <<  "經過push_back()後a的長度變" <<a.size() <<endl;

        vector<int> b(3); ///伸縮自如的陣列 長度是3裡面都放0
        cout << "b的長度是" << b.size() << endl;
        b.push_back(99);///最後再加1個99
        for(int i=0; i<b.size();i++)cout << b[i]  << ' '; ///0 0 0 99
        cout << "經過push_back(99)後b變長了" <<endl;

        vector<int> c(3,88); /// 伸縮自如的陣列長度是3裡面都放88
        for(int i=0;i<c.size();i++) cout <<c[i] << ' '; /// 88 88 88
        cout << "初始化(3,88)就會是3個88" <<endl;

}
