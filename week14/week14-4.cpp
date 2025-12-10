///week14-4.cpp 學習計畫 Linked List 最後一題(要結合第二題，第三題)
///445. Add Two Numbers II
class Solution {
public:
         ListNode* myReverse(ListNode* head){  //右邊反過來的答案

        if(head==nullptr || head->next==nullptr) return head;  ///終止條件

        ListNode * ans = myReverse(head->next);
         head->next->next = head;  ///看左圈 1的下一個是2的下一個 要指回1
         head->next = nullptr;  ///接下來 1的下一個要收來
         return ans;
    }

    ListNode* addTwoNumbers(ListNode*l1, ListNode*l2){
        ListNode* list1 = myReverse(l1); //反過來
        ListNode* list2 = myReverse(l2); //反過來

        return myReverse(myAddTwoNumbers(list1,list2));
    }
    //拍照
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2){
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans; ///幫忙把ans的尾巴收好
        int carry = 0;  ///進位
        while(list1 != nullptr || list2 != nullptr){
            int now = carry;
            if(list1 != nullptr){
                now += list1->val;  /// 加上list1
                list1 = list1->next; ///畫下一筆待命
            }
            if(list2 != nullptr){
                now += list2->val;  /// 加上list1
                list2 = list2->next;
            }
            ans2->next = new ListNode( now%10 );
            ans2 = ans2->next;  //換下一筆待命
            carry = now / 10; ///進位的部分
        }
        if(carry>0) ans2->next = new ListNode(carry); ///最高的進位

        return ans->next;
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
