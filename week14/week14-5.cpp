///week14-5.cpp
//昨天 CPE 1 UVA 10079
#include <iostream>
using namespace std;

int main()
{
    int N;
    while( cin >> N){
        if(N<0) break;
        int ans = 1 +(1+N)*N/2;
        cout << ans << "\n"; ///要有跳行
    } ///小黑輸入5會跳出16
      ///輸入10會跳出56
      ///輸入 -100 接結束 break
}
