#include <iostream>
using namespace std;

int main(){
    //initializing cube and inputting the size and result variable
    int size;
    bool result = true;
    cin>>size;


    //filling the cube and getting sum value
    int cube[size][size];
    for(int i = 0 ; i<size ; i++){
            for(int j = 0 ; j<size ; j++){
                cin>>cube[i][j];
        }
    }
    int sum = 0;
    for(int i = 0 ; i<size ; i++){
        sum += cube[0][i];
    }



    //looping through the cube with a single loop
    //checking rows and columns
    for(int i = 0 ; i<size ; i++){
        int row = 0;
        int column = 0;
        for(int j = 0 ; j<size ; j++){
            row += cube[i][j];
            column += cube[j][i];
        }
        if(row!=sum || column!=sum){
            result = false;
        }
    }

    //checking diagonals
    int diag1 = 0;
    int diag2 = 0;
    for(int i=0 ; i<size ; i++){
        diag1+=cube[i][i];
        diag2+=cube[size-i-1][i];
    }
    if(!(diag1==sum &&diag2==sum)){
            result = false;
    }

    //check 1 - size*size number
    int n = size*size;
    bool number[n];
    for(int i = 0 ; i<n ; i++){
        number[i] = false;
    }
    for(int i = 0 ; i<size ; i++){
            for(int j = 0 ; j<size ; j++){
                if(cube[i][j]<=n){
                    number[cube[i][j]-1]=true;
                }
        }
    }
    for(int i = 0 ; i<n ; i++){
        if(!number[i]){
            result = false;
        }
    }
    

    if (result){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}