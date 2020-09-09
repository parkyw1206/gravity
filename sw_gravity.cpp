/******************************************************************************

Programmer : Youngwoo Park
Date: 09.09.2020

*******************************************************************************/
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int N = 9, M = 8;
    int first = 0 , countOne = 0, max = 0;
    vector<int> v= {7,4,2,0,0,6,0,7,0};
    int box[N][M];
    for(int i = 0 ; i < N; i++){
        for(int j = 0 ; j < v[i] ; j++){
            box[i][j] = 1;
        }
        for(int j = v[i]; j < M; j++){
            box[i][j] = 0;   
        }
    }
    for(int i = 0; i < M ; i++){
        first = 0;
        countOne = N;
        for(int j = 0 ; j < N ; j++){
            if(box[j][i] == 1 && first != 0){
                countOne--;
            }
            if(box[j][i] == 1){
                if(first == 0)
                    first = j;
                countOne--;
            }
        }
        if(first != 0 && max < countOne){
            max = countOne;
        }
    }
    
    return max;
}
