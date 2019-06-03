/*
 * 给定5个正整数, 它们的最小的众倍数是指的能够被其中至少三个数整除的最小正整数。 给定5个不同的正整数, 请计算输出它们的最小众倍数。
 *
 *输入：输入包括一行,一行中有五个各不相同的正整数a, b, c, d, e(1 ≤ a, b, c, d, e ≤ 100), 以空格分割
 * 1 2 3 4 5
 *输出：输出一个整数,表示它们的最小众倍数
 *4
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
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    v.push_back(e);
    sort(v.begin(),v.end());
    int value=v[2];
    int count=0;
    for(;;value++)
    {
        count=0;
        for (int i = 0; i <v.size() ; ++i) {
            if(value%v[i]==0)
            {
                count++;
                if(count==3)
                    break;
            }
        }
        if(count==3)
            break;
    }
    cout<<value<<endl;
    return 0;
}