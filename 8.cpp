/*
 * 小易老师是非常严厉的,它会要求所有学生在进入教室前都排成一列,并且他要求学生按照身高不递减的顺序排列。
 * 有一次,n个学生在列队的时候,小易老师正好去卫生间了。学生们终于有机会反击了,于是学生们决定来一次疯狂的队列,
 * 他们定义一个队列的疯狂值为每对相邻排列学生身高差的绝对值总和。由于按照身高顺序排列的队列的疯狂值是最小的,
 * 他们当然决定按照疯狂值最大的顺序来进行列队。现在给出n个学生的身高,请计算出这些学生列队的最大可能的疯狂值。小易老师回来一定会气得半死。
 * 输入描述:输入包括两行,第一行一个整数n(1 ≤ n ≤ 50),表示学生的人数，第二行为n个整数h[i](1 ≤ h[i] ≤ 1000),表示每个学生的身高
 * 5
 * 5 10 25 40 25
 * 输出：输出一个整数,表示n个学生列队可以获得的最大的疯狂值。   100
 * 如样例所示:
 * 当队列排列顺序是: 25-10-40-5-25, 身高差绝对值的总和为15+30+35+20=100。
 * 这是最大的疯狂值了。
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
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int max=v[0];
    int min=v[n-1];
    int maxline=1;
    int minline=n-1-1;
    int sum=max-min;
    while(minline>maxline)
    {
        sum+=(max-v[minline]+v[maxline]-min);
        max=v[maxline++];
        min=v[minline--];
    }
    if((max-v[minline])>(v[maxline]-min))
    {
        sum+=max-v[minline];
    } else{
        sum+=v[maxline]-min;
    }
    cout<<sum<<endl;
    return 0;
}