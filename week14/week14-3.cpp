//week14-3.cpp 學習計畫 Linked List 第2題 另一種寫法
//LeetCode  206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;  //伸縮自如的陣列
        while( head != nullptr){  ///不是結尾的nullptr
            a.push_back(head->val);  //塞入伸縮自如的陣列
            head = head->next; //換下一筆
        } ///以上 把Linked List裡面的值逐一芳入 陣列a

        ListNode* ans = new ListNode(999); ///把答案掛在這裡
        ListNode* now = ans; //現在 雙處理的node幫忙ans收尾
        for(int i=a.size()-1;i>=0;i--){ //倒過來的迴圈
            now->next = new ListNode( a[i]); ///見出新的node接起來
            now = now->next; ///換下一筆
        } ///跟上周的寫法很像
        return ans->next;  ///錯!


        }

};




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
