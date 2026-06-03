#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int valAbs(int n)
{
    if (n < 0)
    {
        return -n;
    }
    return n;
}
int searshClosest(int n, int *arr, int size)
{
    if (n < arr[0])
        return arr[0];

    if (n > arr[size - 1])
        return arr[size - 1];

    int left=0;int right=size-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]==n){
            return(arr[mid]);
        }
        else if(arr[mid]>n){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    if (valAbs(n-arr[left]) < valAbs(n-arr[right])){
        return arr[left];
    }
    else if(valAbs(n-arr[left]) > valAbs(n-arr[right])) {
        return arr[right];
    }
    else{
        if(arr[left]<arr[right]){
            return(arr[left]);
        }
        else return(arr[right]);

    }
}

int main()
{
    int nBlocks;
    cin >> nBlocks;
    int blocks[nBlocks];
    for (int k = 0; k < nBlocks; k++)
    {
        cin >> blocks[k];
    }
    int q;
    int density;
    cin >> q;

    sort(blocks, blocks + nBlocks);
    for (int i = 0; i < q; i++)
    {
        cin >> density;
        int minDiff = searshClosest(density, blocks, nBlocks);
        cout << minDiff << endl;
    }
}