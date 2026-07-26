#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result;
        ListNode* L1 = list1;
        ListNode* L2 = list2;
        if(L1==nullptr&&L2==nullptr){
            return nullptr;
        }else{
            if(L1==nullptr){
                return L2;
            }else if(L2==nullptr){
                return L1;
            }
        }
        if(L1->val<L2->val){
            result = new ListNode(L1->val);
            L1 = L1->next;
        }else{
            result = new ListNode(L2->val);
            L2 = L2->next;
        }

        ListNode* ptr = result;

        while(L1!=nullptr && L2!=nullptr){
            if(L1->val<L2->val){
                ptr->next = new ListNode(L1->val);
                L1 = L1->next;
            }else{
                ptr->next = new ListNode(L2->val);
                L2 = L2->next;
            }
            ptr=ptr->next;
        }
        if(L1==nullptr){
            while(L2!=nullptr){
                ptr->next = new ListNode(L2->val);
                L2 = L2->next;
                ptr=ptr->next;
            }
        }else{
            while(L1!=nullptr){
                ptr->next = new ListNode(L1->val);
                L1 = L1->next;
                ptr=ptr->next;
            }
        }
        return result;
    }
};