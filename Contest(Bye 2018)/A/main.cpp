#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[3];
    long long int minimum = 1e9;
    int k = 0;

    for(int i = 0 ; i < 3 ; i++){
        cin >> array[i];
        if(minimum > array[i]){
            minimum = array[i];
            k = i;
        }
    }

    if (k == 0){
        while(array[0] != (array[2] -2)){
            array[0] = array [0] -1;
        }
        cout << (array[0] + (array[0] +1) +(array[0] +2)) << endl;
        exit(0);
    }

    if(k == 1){
        cout << ((array[1] - 1) + (array[1]) + (array[1] +1)) << endl;
        exit(0);
    }

    if(k == 2){
        cout << ((array[2] -2) + (array[2] -1) + (array[2])) << endl;
        exit(0);
    }
    return 0;
}
