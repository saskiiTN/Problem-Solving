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
    int numberOfNodes(ListNode* n){
        int ans=0;
        if(n==nullptr){
            return 0;
        }else{
            ListNode* x = n;
            while(x!=nullptr){
                ans++;
                x=x->next;
            }
        }
        return ans;
    }
    void addNode(ListNode* head ,int val){
        if(head==nullptr){
            head = new ListNode(val);
        }else{
            ListNode* node = head;
            while(node->next!=nullptr){
                node=node->next;
            }
            node->next = new ListNode(val);
        }
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>v;
        int n = numberOfNodes(head);
        ListNode* pointer;
        if(n==0){
            return v;
        }
        if(n/k==0){
            for(int i = 0;i<k;i++){
                if(head!=nullptr){
                    ListNode* node = new ListNode(head->val);
                    v.push_back(node);
                    head=head->next;
                }else{
                    v.push_back(nullptr);
                }
            }
        }else{
            if(n%k!=0){
                ListNode* node = new ListNode(head->val);
                head = head->next;
                pointer = node;
                for(int i = 0;i<(n/k)+1 ; i++){
                    pointer->next = new ListNode(head->val);
                    pointer=pointer->next;
                    head = head->next;
                }
                v.push_back(node);
            }else{
                ListNode* node =new ListNode(head->val);
                head = head->next;
                pointer = node;
                for(int i = 0;i<(n/k) ; i++){
                    pointer->next = new ListNode(head->val);
                    pointer=pointer->next;
                    head = head->next;
                }
                v.push_back(node);
            }
            for(int i = 0;i<k-1;i++){
                ListNode* node ;
                addNode(node,head->val);
                head = head->next;
                pointer = node;
                for(int i = 0;i<(n/k) ; i++){
                    pointer->next = new ListNode(head->val);
                    pointer=pointer->next;
                    head = head->next;
                }
                v.push_back(node);
            }
        }
        return v;
    }
};