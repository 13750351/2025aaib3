///week02-2.cpp
///�n�� c++���r�� �ϹL��
#include <iostream> ///iO��y�~��
#include <string> ///�r��~��
using namespace std;

int main()
{
    cout << "�п�J�Ƥl: ";
    string a, ans; /// c++���r��
    cin >>a; ///Ū�J�r��
    ///��L�Ӫ��j��
    for(int i=a.length()-1; i>=0;i--){
        ans += a[i]; ///�r���˹L�ө������
    }

    cout << a<< ans;

}
