#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> q;
    long long int songs , length;
    cin >> songs >> length;
    int result = 0;

    for(int i = 0 ; i < songs ; i++){
        int time;
        cin >> time;
        q.push(time);
    }

    while(!q.empty()){
        result += q.front();
        q.pop();
    }

    if((result + (songs - 1)*10) > length){
        cout << -1 << endl;
        exit(0);
    }
    cout << (length - result)/5 << endl;


    return 0;
}
