#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int x , y;

    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        if((x+x) <= y){
            cout << x << " " << x+x << endl;
        }
    }

    return 0;
}
