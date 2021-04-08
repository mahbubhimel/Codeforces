#include <bits/stdc++.h>
using namespace std;

int main()
{
   int student , n ;
   vector <int> v[10];
   cin >> n;
   for(int i = 1 ; i <=n ; i++){
        cin >> student;
        if(student == 1){
            v[0].push_back(i);
        }
        if(student == 2){
            v[1].push_back(i);
        }
        if(student == 3){
            v[2].push_back(i);
        }
   }

   int teams = min(v[0].size() , min(v[1].size() , v[2].size()));
   cout << teams << endl;
   for(int i = 0 ; i < teams ; i++){
        cout << v[0][i] << " " << v[1][i] << " " << v[2][i] << endl;
   }
    return 0;
}
