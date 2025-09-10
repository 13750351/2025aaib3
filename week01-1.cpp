#week01-2.py
#
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        #sadbutsad
        #sad i=0
        # sad i=1
        #.....
        #   sad i;6
        for i in range(H-N+1): #長度9 找 長度3 有0..6共6格
            if haystack[i:i+N] == needle: #若兩個相同
            #把字串 從i開始 取道i+N結束 共N個字
                return i #成功找到位置
        return -1 #沒有成功
