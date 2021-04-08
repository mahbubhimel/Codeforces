#include<bits/stdc++.h>
using namespace std;
int arr[1000];

string removeSpaces(string str)
{
	stringstream ss;
	string temp;
	ss << str;
	str = "";
	while (!ss.eof())
	{
		ss >> temp;
		str = str + temp;
	}
	return str;
}

int main()
{
	string s;
	getline(cin,s);
	string ss = removeSpaces(s);
	int length = ss.length();

	int count = 1 ;
	int comma = 0;
	int k = 0;

	for(int i = 1 ; i < ss.length() - 1 ; i++){
            if(ss.at(i) == ','){
                comma++;
            }
            if(ss.at(i) != ','){
                arr[k] = ss.at(i);
                k++;
            }
	}

	sort(arr , arr + k);
	if(arr[0] == 0){
        cout << 0 << endl;
        exit(0);
	}

	int loop = 0;
	int poop = 0;
	for(int i = 0 ; i < k ; i++){
            for(int j = i + 1 ; j < k ; j++){
                if(arr[i] != arr[j]){
                    count++;
                    i = j;
                    i--;
                    break;
                }
            }
	}

	cout << count << endl;
	return 0;
}
