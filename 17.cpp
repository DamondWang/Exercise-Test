#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <map>
#include <set>
using namespace std;
int strtoint(string str)   //字符串转化为整数
{
    stringstream ss;
    int value;
    ss<<str;
    ss>>value;
    ss.str("");
    ss.clear();
    return value;
}
int main()
{
    string str;
    getline(cin,str);
    vector<int> x;
    vector<int> y;
    for (int i = 0; i <str.length(); ++i) {
        if(str[i]==',')
            str[i]=' ';
    }
    stringstream ss(str);
    string substr;
    while (getline(ss,substr,' '))
    {
        x.push_back(strtoint(substr));
        if(getline(ss,substr,' '))
        y.push_back(strtoint(substr));
    }
    ss.str("");
    ss.clear();
    string result="";
    int count=0;
    for (int i = 0; i <x.size()-1 ; ++i) {
        if(x[i]<=y[i+1] && x[i+1]<=y[i])
        {
            count++;
            x[i+1]=x[i];
            y[i+1]=y[i+1];
        }
    }

    for (int i = count; i <x.size() ; ++i) {
        result+=(to_string(x[i])+','+to_string(y[i]));
        if(i!=x.size()-1)
            result+=' ';
    }
    cout<<result<<endl;
    return 0;
}
