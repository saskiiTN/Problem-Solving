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
    ListNode* lastNode(ListNode* n){
        ListNode* result=n;
        if(result == nullptr){
            return nullptr;
        }else{
            while(result->next!=nullptr){
                result = result->next;
            }
        }
        return result;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int size = numberOfNodes(head);
        if(size==0){
            return nullptr;
        }else{
            ListNode* x = head;
            ListNode* last = lastNode(head);
            
            k = k % size;
            for (int i = 0 ; i<(size-k-1);i++){
                x=x->next;
            }
            last->next = head;
            head = x->next;
            x->next = nullptr;
        }
        return head;
    }
};