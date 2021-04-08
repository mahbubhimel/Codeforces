        #include <bits/stdc++.h>
        using namespace std;

        int main()
        {
            vector<long long int> v;
            int q;
            cin >> q;
            long long int k;
            long long int sum = 0;
            for(int i = 0 ; i < q ; i++){
                long long int x;
                cin >> x;
                for(int j = 0 ; j < x ; j++){
                    cin >> k;
                    v.push_back(k);
                    sum = sum + k;
                }
                sort(v.begin() , v.end());
                    for(int m = 0 ; m < v.size() ; m++){
                        long long int y = v[m];
                        long long int z = v.size();
                        if((y * z) >= sum){
                           cout << y << endl;
                           break;
                }
            }
                v.clear();
                sum = 0;
            }
            return 0;
        }
