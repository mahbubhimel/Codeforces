#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector < pair<int,int> > m;
    vector < pair<int,int> > :: iterator it;
    int s , n;
    int count = 0;

    cin >> s >> n;

    for(int i = 0 ; i < n ; i++){
        int dragon_1 , dragon_2;
        cin >> dragon_1 >> dragon_2;
        m.push_back(make_pair(dragon_1 , dragon_2));
    }

    sort(m.begin() , m.end());

    for(it = m.begin() ; it != m.end() ; it++){

        if(s < it->first){
            cout << "NO" << endl;
            exit(0);
        }
        if(s > it->first){
            s+=it->second;
            count++;
        }
        //cout << it->first << " " << it->second << endl;
    }

    if(count == n){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
