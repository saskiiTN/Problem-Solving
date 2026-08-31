#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
    ListNode *next;
	ListNode() : val(0), next(nullptr) {}     
	ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
		vector<int> ans;
		vector<int> criticalPoints;
		//if len == 2
        if(head->next->next == nullptr){
			ans.push_back(-1);
			ans.push_back(-1);
			return ans;
		}
		
		//counter of the node position (0-indexed)
		int cp = 1;
		ListNode* previous = head;
		ListNode* current = previous->next;
		ListNode* nextNode = current->next;
		while(nextNode!=nullptr){
			int pVal = previous->val;
			int cVal = current->val;
			int nVal = nextNode->val;
			if( (cVal<pVal && cVal<nVal) || (cVal>pVal && cVal>nVal) ){
				criticalPoints.push_back(cp);
			}
			cp++;
			previous = previous->next;
			current = current->next;
			nextNode = nextNode->next;
		}
		int n = criticalPoints.size();
		if(n == 1 || n==0){
			ans.push_back(-1);
			ans.push_back(-1);
			return ans;
		}
		int minDistance = criticalPoints[1] - criticalPoints[0], maxDistance= criticalPoints[n-1] - criticalPoints[0];
		for(int i = 0 ; i<n-1; i++){
			int distance = criticalPoints[i+1] - criticalPoints[i];
			if(distance<minDistance)
				minDistance=distance;
		}
		ans.push_back(minDistance);
		ans.push_back(maxDistance);
		return ans;
    }
};