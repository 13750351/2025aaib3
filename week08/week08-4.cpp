///week08-4.cpp LeetCode 學習計畫
///1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int d =0; ///0:北 1:東 2:南 3:西
        int x =0, y=0; ///一開始往左
        instructions = instructions+instructions+instructions+instructions;
        for(char c : instructions){
            if(c=='G'){ ///往前走
            if(c=='G'){
                if(d==0) y++; ///往北走一
                if(d==1) x++; ///往東走一
                if(d==2) y--; ///往南走一
                if(d==3) x--; ///往西走一
            }
            }else if(c=='R'){ ///往右走
                d = (d+1) %4;
            }else if(c=='L'){///往左轉
                d = (d+3) %4;
            }
         }
        return x==0 && y==0; ///結束時機器人在哪?甚麼較繞圈圈

        }
};
