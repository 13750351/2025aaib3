///week05-2.cpp
/// 搞懂 stringstream
#include <iostream>  ///為了cin cout
#include <string> ///為了字串string
#include <sstream> ///新的string 變成 stream的外掛
using namespace std; ///為了不寫 std::cin
int main()
{
    string line;  /// 準備放 一整行 的字串
    getline ( cin , line); ///一次讀入一整行
    cout << line << endl;  /// 印出來 加跳行


    stringstream ss(line); /// 新的把string 變成 stream
    string word;
    while( ss >> word ){
        cout << "ss讀到1個字 : " << word << endl;
    }

}
