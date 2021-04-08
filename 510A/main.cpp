#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;

    for(int i = 1 ; i <=n ; i++){
            if(i % 2 != 0){
        for(int j = 1 ; j <=m ; j++){
                cout << "#";
        }
            }if(i % 2 == 0 && i % 4 != 0){
                for(int k = 1 ; k <m ; k++){
                    cout << ".";
                }
                cout << "#";
            }
            if(i % 4 == 0){
                cout << "#";
                for(int v = 1; v < m ; v++){
                    cout << ".";
                }
    }
    cout << endl;
    }
    return 0;
}
