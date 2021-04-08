#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;

    for(int i = 0; i < 5; i++){
        string k;
        cin >> k;
        if(input[0] == k[0] || input[1] == k[1]){
            cout << "YES" << endl;
            exit(0);
        }
    }

    cout << "NO" << endl;

    return 0;
}
