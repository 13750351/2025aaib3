///week05-2.cpp
/// �d�� stringstream
#include <iostream>  ///���Fcin cout
#include <string> ///���F�r��string
#include <sstream> ///�s��string �ܦ� stream���~��
using namespace std; ///���F���g std::cin
int main()
{
    string line;  /// �ǳƩ� �@��� ���r��
    getline ( cin , line); ///�@��Ū�J�@���
    cout << line << endl;  /// �L�X�� �[����


    stringstream ss(line); /// �s����string �ܦ� stream
    string word;
    while( ss >> word ){
        cout << "ssŪ��1�Ӧr : " << word << endl;
    }

}
