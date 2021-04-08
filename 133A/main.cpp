#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char H = 'H';
    char Q = 'Q';
    char nine = '9';
    char p = '+';

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == H || s[i] == Q || s[i] == nine){
            cout << "YES" << endl;
            exit(0);
        }
    }

    cout << "NO" << endl;
    return 0;
}
