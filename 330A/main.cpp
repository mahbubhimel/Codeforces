#include <bits/stdc++.h>
using namespace std;

int main()
{
    char array[100][100];
    int row[100];
    int column[100];
    int r, c;
    int ro = 0 , col = 0;
    cin >> r >> c;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin >> array[i][j];
        }
    }

    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            if(array[i][j] == 'S'){
                row[i] = 1;
                column[j] = 1;
            }
        }
    }

    int r_size = sizeof(row) / sizeof(row[0]);
    int c_size = sizeof(column) / sizeof(column[0]);

    for(int i = 0 ; i < r_size ; i++){
        ro += row[i];
    }

    for(int i = 0 ; i < c_size ; i++){
        col += column[i];
    }

    int result = (r*c) - (ro*col);
    cout << result << endl;


    return 0;
}
