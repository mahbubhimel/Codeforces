#include <bits/stdc++.h>
using namespace std;

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
    getline(cin , s);

    int length;

    int len = s.length();

    int count = 0 ;

    for(int i = 0 ; i < len ; i++){

            cout << "Value of I " << i << endl;
            cout << "Value of the string " << len << endl;

        if(s[i] == s[i+1]){
            count++;
           // cout << count << endl;
            s.at(i) = ' ';
            s.at(i+1) = ' ';
            s = removeSpaces(s);
            length = s.length();
            //cout << s << length << endl;
            i = -1;
            len = length;

            if(len == 0){
                break;
            }
        }
    }

    if(count % 2 == 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }



    return 0;
}
