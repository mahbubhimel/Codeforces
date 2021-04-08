#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;

    int n , k;
    cin >> n >> k;

    for(int i = 0 ; i < n ; i++){
        int student;
        cin >> student;
        if((5-student) >= k){
            v.push_back(student);
        }
    }

    int result = v.size() / 3;

    cout << result << endl;

    return 0;
}
