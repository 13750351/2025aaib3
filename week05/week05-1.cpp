///week05-1.cpp
/// leetcode �ǲ߭p�e 58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); ///��r��string �� iostream �� cin �ӥ�
        string word; //�r��
        ///ss >> word; ///���Ocin >> word�@�� �{�b��ss�i�H�� ss >> word
        ///ss >> word;
        while(ss >> word){ ///�@��Ū �W�줣��W����
            //�̭��ƻ򳣨S��
        }
        cout << word;///�����@�ӹ���

        return word.length(); /// �̫����װe�X�h

    }
};
