///week15-2.cpp
///LeetCode 50. Pow(x, n)
///因為n 可能非常大 2^31 也就是 10^9 很大 不能用for迴圈
class Solution {
public:
    double myPow(double x, long long int n) {
        if(x==1) return 1; ///邊界條件 很煩
        if(n<0) return myPow(1/x,-n); //負的 寒士呼叫法
        if(n==0) return 1; /// 所有數地的0次方

        //思考: ???的???次方 可以切一半(很難想出來)
        double half = myPow(x, n/2);//一半喔
        if(n%2==0) return half*half;
        else return half*half*x;
    }
};

