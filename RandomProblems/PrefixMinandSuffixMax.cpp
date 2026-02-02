#include <iostream>
#include <string>
#include <vector>
using namespace std;


bool BiggerOnRight(vector<int>v ,int pos){
	for(int i = pos+1 ; i<v.size();i++){
		if(v[i]>v[pos]){
			return true
		}
	}
	return false;
}
bool SmallerOnLeft(vector<int>v ,int pos){
	for(int i = 0 ; i<pos;i++){
		if(v[i]<v[pos]){
			return true
		}
	}
	return false;
}
int findMax (vector<int> v){
    int max=v[0];
    int pos =0;
    for(int i = 0 ; i<v.size() ; i++){
        if (v[i]>max){
            max = v[i];
            pos = i;
        }
    }
    return i;
}

int findMin (vector<int> v){
    int min=v[0];
    int pos =0;
    for(int i = 0 ; i<v.size() ; i++){
        if (v[i]<min){
            min = v[i];
            pos = i;
        }
    }
    return i;
}
// find min and max index
// do new result string , fill with 0's
// replace the number accordingly

int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int len, posMin, posMax;
        vector<int> s;
        vector<int> result;

        cin >> len;
        for (int k = 0; k < len; k++)
        {
            int test;
            cin >> test;
            s.push_back(test);
            result.push_back(1);
        }
        //posMax = findMax(v);
		//posMin = findMin(v);
        //for (int j = posMin + 1; j < posMax - 1; j++)
        //{
        //    result[j] = 0;
        //}
		
		for(int i = 0 ; i<v.size();i++){
			if(BiggerOnRight(v,i)||SmallerOnLeft(v,i)){
				result[i]=0;
			}
		}
        for (int j = 0; j < len; j++)
        {
            cout << result[j];
        }
        cout << endl;
    }
}