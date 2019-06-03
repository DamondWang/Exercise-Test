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
#include <iomanip>
using namespace std;
#define MAX 51
long long cnk[MAX][MAX]={0};
int strtoint(string str)  //字符串转化为整数
{
    stringstream ss;
    int value;
    ss<<str;
    ss>>value;
    ss.str("");
    ss.clear();
    return value;
}
void buildY()    //构建杨辉三角
{
    int i;
    for(i=1,cnk[0][0]=1;i<MAX;i++)
    {
        cnk[i][0]=1;
        for (int j = 1; j <MAX ; ++j) {
            cnk[i][j]=cnk[i-1][j-1]+cnk[i-1][j];
        }
    }
}
int main()
{
    string str;
    getline(cin,str);
    int d;
    cin>>d;
    str.erase(0,1);
    str.erase(str.length()-1,1);
    stringstream ss(str);
    string value;
    vector<int> v;
    while (getline(ss,value,','))
    {
        v.push_back(strtoint(value));
    }
    ss.str("");
    ss.clear();
    sort(v.begin(),v.end());
    int sum=0;
    for (int i = 0; i < v.size()-1; ++i) {
        for (int j = i+1; j <v.size() ; ++j) {
            if(abs(v[i]-v[j])<=d)
                sum++;
        }
    }
    buildY();
    double p=(double)sum/(double)cnk[v.size()][2];
    cout.precision(6);
    cout<<fixed<<p<<endl;
    return 0;
}
