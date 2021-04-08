#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    char array[1000][1000];
    int arrayInt[1000];
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> array[i][j];
        }
    }

    for(int i = 1 ; i < n  ; i++){
        for(int j = 1 ; j < n ; j++){
            if(array[i-1][j-1] == 'X' && array[i-1][j+1] == 'X' && array[i+1][j-1] == 'X' && array[i+1][j+1] == 'X' && array[i][j] == 'X'){
                    //cout <<i<<j<<" "<< (i-1)<<(j-1) << " " << (i-1)<<(j+1) << " " << (i+1)<<(j-1) << " " << (i+1)<<(j+1) << endl;
                    count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
