///week08-4.cpp LeetCode �ǲ߭p�e
///1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d =0; ///0:�_ 1:�F 2:�n 3:��
        int x =0, y=0; ///�@�}�l����
        instructions = instructions+instructions+instructions+instructions;
        for(char c : instructions){
            if(c=='G'){ ///���e��
            if(c=='G'){
                if(d==0) y++; ///���_���@
                if(d==1) x++; ///���F���@
                if(d==2) y--; ///���n���@
                if(d==3) x--; ///���訫�@
            }
            }else if(c=='R'){ ///���k��
                d = (d+1) %4;
            }else if(c=='L'){///������
                d = (d+3) %4;
            }
         }
        return x==0 && y==0; ///�����ɾ����H�b��?�ƻ��¶���

        }
};
