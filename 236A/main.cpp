#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <char , int> gender;
    string s;
    cin >> s;

    for(int i = 0 ; i < s.length() ; i++){
        gender[s[i]]++;
    }

    if(gender.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }


    return 0;
}
