#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , k;
    cin >> n;
    string s;

    for(int i = 0 ; i < n ; i++){
        cin >> k;
        cin >> s;

            if(k == 2 &&(s[0] >= s[1])){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
                cout << 2 << endl;
                cout << s[0] << " " << s.substr(1 , s.size()) << endl;

            }
    }
    return 0;
}
