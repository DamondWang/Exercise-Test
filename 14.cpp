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
    string s;
    cin>>s;
    int a[10]={0};
    for (int i = 0; i <s.length() ; ++i) {
        int c=s[i]-'0';
        a[c]++;
    }
    int min=0;
    for (int i = 0; i <10 ; ++i) {
        if(min>a[i])
            min=a[i];
    }
    int j;
    for (j = 0; j <10 ; ++j) {
        if(a[j]==min)
            break;
    }
    if(j==0)
        cout<<1;
    for (int i = 0; i <a[j] ; ++i) {
        cout<<j;
    }
    if(j!=0)
        cout<<0;
    return 0;
}
