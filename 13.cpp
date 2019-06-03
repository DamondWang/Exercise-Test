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
bool f(vector<int> v1,vector<int> v2)
{
    for (int i = 0; i <v1.size() ; ++i) {
        if(v1[i]!=v2[i])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n),newv(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    for (int i = 0; i <n ; ++i) {
        newv[i]=v[i];
    }
    sort(v.begin(),v.end());
    int count=0;
    while(1)
    {
        if(f(v,newv))
        {
            cout<<count<<endl;
            break;
        }
        sort(newv.begin(),newv.end()-1);
        count++;
        if(f(v,newv))
        {
            cout<<count<<endl;
            break;
        }
        sort(newv.begin()+1,newv.end());
        count++;
    }
    return 0;
}

