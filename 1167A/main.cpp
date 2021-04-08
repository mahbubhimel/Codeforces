#include <bits/stdc++.h>

using namespace std;

void calculation(){
    string v;
    int number;
    cin >> number;
    cin >> v;
    int it = v.length();

    if(number == 11 && v[0] == '8'){
        cout << "YES" << endl;
        return;
    }

    int poop = 0;

    for(int i = 0 ; i < it ; i++){
        if(v[i] == '8'){
            poop++;
            string s = v.substr(i,(number-1));
            //cout << s << s.length();
            if(s.length() >= 11){
                cout << "YES" << endl;
                break;
            }else{
                cout << "NO" << endl;
                break;
            }
        }
    }

    if(poop == 0){
        cout << "NO" << endl;
        return;
    }

}

int main()
{
    int t;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
        calculation();
    }

    return 0;
}
