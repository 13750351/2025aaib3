///week06-1.cpp
///�ǲ߭p�e  242. Valid Anagram
///���A2�Ӧr�� �P�_�r���O�_�ۦP(�i������)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.length() != t.length() ) return false; // ���P��������

        ///\����r�� s �r���ֿn�@�U
        int R[26] = {};///�n�����@�Ӧ^���� �Ӥ�����r��
        for(int i=0;i<s.length();i++){
            char c = s[i] - 'a'; /// ���ӬO�p�g�r�� ���O�ܦ�0-25�ҥH�n�'a'
            R[c]++;
        }
        ///�A����ֿn���r�� ��t�Ψ쨺�� ���� ��n�Χ�(����ζW�L)
        for(int i=0; i<t.length();i++){
            char c =t[i] - 'a';
            R[c]--; // �α��L
            if(R[c]<0) return false;//�����δN����
        }
        return true;
    }
};
