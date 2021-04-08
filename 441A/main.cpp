#include <bits/stdc++.h>
using namespace std;

vector <int> a;

void calculation(long long int money , int index){
    vector <int> v;

    int n;
    cin  >> n;

    for(int i = 0 ; i < n ; i++){
        long long int data;
        cin >> data;
        v.push_back(data);
    }

    auto min_value = *min_element(v.begin() , v.end());

    if(money > min_value){
        a.push_back(index);
    }


}

int main()
{
    long long int n , money;
    cin >> n >> money;

    for(int i = 1 ; i <=n ; i++){
        calculation(money , i);
    }

    if(a.size() == 0){
        cout << 0 << endl;
    }else{
        cout << a.size() << endl;
        for(auto it = a.begin() ; it != a.end() ; it++){
            cout << *it << " ";
        }
    }

    cout << endl;

    return 0;
}
