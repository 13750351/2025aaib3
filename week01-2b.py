///Leetcode �ǲ߭p�e �j�����w �b haystack ��� needle
///28. Find the Index of the First Occurrence in a String

class Solution {
public:
    int strStr(string haystack, string needle) {
        ///�ĥν��� ��Ҧ��i�઺��m ����@�M
        ///ex. sadbutsad �����L �n�� sad
        ///i;0 sad �� haystack �ūe��N�Ӧr��
        ///     sad
        ///i=1; sad
        ///     sad
        ///i=2  sad . . . .
        ///     dbu
        int H = haystack.length(), N = needle.length();
        for(int i=0; i<=H - N;i++ ){ ///i�չL�Ҧ���m
           if( haystack.substr(i,N) == needle) return i;
           ///�qi�}�l �ťXn�Ӧr�� ���M�ۦP ;��쵪��
        }
        return -1;///�S����쵪�� �n�^��-1�N����
    }
};
