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
    int n,w;
    cin>>n>>w;
    vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sum=0;
    if(n%2!=0)
        sum++;
    for (int i = 0; i <v.size()/2 ; ++i) {
        if(v[i]+v[v.size()-1-i]>w)
            sum+=2;
        else sum++;
    }
    cout<<sum<<endl;
    return 0;
}
