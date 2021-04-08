#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char array[105][105];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> array[i][j];
        }
    }

    int count = 0;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
                if(i-1 >= 0 && array[i-1][j] == 'o'){ count ++ ;}
                if(i+1 < n && array[i+1][j] == 'o'){ count++ ;}
                if(j+1 < n && array[i][j+1] == 'o'){ count++ ;}
                if(j-1 >= 0 && array[i][j-1] == 'o'){ count++ ;}
                if(count % 2 != 0){
                    cout << "NO" << endl;
                    exit(0);
                }
        }
    }

    cout << "YES" << endl;


    return 0;
}
