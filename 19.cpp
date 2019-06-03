/*
 * 牛牛有一个正整数x,牛牛需要把数字x中的数位进行重排得到一个新数(不同于x的数),牛牛想知道这个新数是否可能是原x的倍数。请你来帮他解决这个问题。
 * 输入：输入包括t+1行,第一行包括一个整数t(1 ≤ t ≤ 10),接下来t行,每行一个整数x(1 ≤ x ≤ 10^6)
 * 2
 * 14
 * 1035
 * 输出：对于每个x,如果可能重排之后变为自己的倍数输出"Possible", 否则输出"Impossible".
 * Impossible
 * Possible
 */

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
vector<int> num;
void f(int n)
{
    while (n>=10)
    {
        num.push_back(n%10);
        n/=10;
    }
    num.push_back(n);
    sort(num.rbegin(),num.rend());
}
int g()
{
    int tmp=0;
    for (int i = 0; i <num.size() ; ++i) {
        tmp+=(num[num.size()-1-i]*pow(10,i));
    }
    return tmp;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    int value,max;
    int j,k;
    for (int i = 0; i <n ; ++i) {
        value=v[i];
        num.clear();
        f(value);
        max=g();
        for (j = value*2,k=3; j <=max ; j=value*k,k++) {
            num.clear();
            f(j);
            if(g()==max)
            {
                cout<<"Possible"<<endl;
                break;
            }
        }

        if(j>max)
        cout<<"Impossible"<<endl;
    }

    return 0;
}

