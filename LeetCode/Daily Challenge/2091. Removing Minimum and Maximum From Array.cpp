#include <bits/stdc++.h>
using namespace std;

class Point{
	public:
		int index;
		int deletionCost;
		pair<int,int> deletionSegment;
		Point(int i){
			index = i;
		}
		void calculateCost(int start , int finish){
			int right = index - start + 1;
			int left = finish - index + 1;
			
			if(right<left){
				deletionCost = right;
				deletionSegment = make_pair(start,index);
			}else{
				deletionMax = left;
				deletionSegment = make_pair(index,finish);
			}
		}
};
class Solution {
public:
	int deletePoint(Point p , int* start , int* finish){
		if(p.deletionSegment.first == 0){
			*start = p.index + 1;
		}else{
			*finish = p.index-1;
		}
		return p.deletionCost;
	}
    int minimumDeletions(vector<int>& nums) {
		int n = nums.size();
		int start = 0 , finish = n-1;
		
		int posMin = 0 , posMax = 0;
		int max = nums[0], min = nums[0];
		int result = 0;
		
		for(int i = 1 ;i<n ; i++){
			if(nums[i]>max){
				max = nums[i];
				posMax = i;
			}
			if (nums[i]<min){
				min = nums[i];
				posMin = i;
			}
		}
		
		Point p1(posMax);
		Point p2(posMin);
		p1.calculateCost(start,finish);
		p2.calculateCost(start,finish);
		
		if(p1.deletionCost<p2.deletionCost){
			result +=deletePoint(p1,&start,&finish);
			p2.calculateCost();
			result +=deletePoint(p2,&start,&finish);
		}else{
			result +=deletePoint(p2,&start,&finish);
			p1.calculateCost();
			result +=deletePoint(p1,&start,&finish);
		}
		return result;
    }
};