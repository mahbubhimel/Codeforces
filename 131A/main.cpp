#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int whole = 0;
    int one = 0;

    for(int i = 0 ; i < s.size() ; i++){
        if(isupper(s[i])){
            whole++;
        }
        if(i > 0 && isupper(s[i]) && islower(s[0])){
            one++;
        }
    }

    if(whole == s.length()){
        for(int i = 0 ; i < s.length() ; i++){
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
        exit(0);
    }

    if(one == s.length()-1){
        for(int i = 0 ; i < s.length() ; i++){
            s[i] = tolower(s[i]);
            s[0] = toupper(s[0]);
        }
        cout << s << endl;
        exit(0);
    }

    cout << s << endl;
    return 0;
}
