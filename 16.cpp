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
int main()
{
    int n;
    cin>>n;
    string a="2";
    for (int i = 2; i <=n ; ++i) {
        int len=a.size();
        int jinwei=0;
        for (int j = 0; j <len ; ++j) {
            int t=a[j]-'0';
            t*=2;
            t+=jinwei;
            if(t>=10)
            {
                t-=10;
                jinwei=1;
            } else{
                jinwei=0;
            }
            a[j]='0'+t;
        }
        if(jinwei==1)a+="1";
    }
    for(auto it=a.rbegin();it!=a.rend();it++)
        cout<<*it;
    cout<<endl;
    return 0;
}