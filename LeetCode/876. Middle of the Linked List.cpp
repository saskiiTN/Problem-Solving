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
    ListNode* middleNode(ListNode* head) {
        //counter number of nodes
        //return the middle rounded up
        ListNode* pointer = head;
        int n = 0 ;
        while(pointer!=nullptr){
            pointer=pointer->next;
            n++;
        }
        pointer = head;
        for(int i = 1 ; i<=(n/2);i++){
            pointer = pointer->next;
        }
        return pointer;
    }
};