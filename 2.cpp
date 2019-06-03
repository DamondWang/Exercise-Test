/*
 * 六一儿童节，老师带了很多好吃的巧克力到幼儿园。每块巧克力j的重量为w[j]，对于每个小朋友i，当他分到的巧克力大小达到h[i] (即w[j]>=h[i])，
 * 他才会上去表演节目。老师的目标是将巧克力分发给孩子们，使得最多的小孩上台表演。可以保证每个w[i]> 0且不能将多块巧克力分给一个孩子或将一块分给多个孩子。
 * 输入：第一行：n，表示h数组元素个数
        第二行：n个h数组元素
        第三行：m，表示w数组元素个数
        第四行：m个w数组元素

        3
        2 2 3
        2
        3 1
    输出：上台表演学生人数
         1
 */
#include<iostream>
#include<vector>
#include <stack>
#include<string>
#include<algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n];
    for (int i = 0; i <n ; ++i) {
        cin>>h[i];
    }
    int m;
    cin>>m;
    int w[m];
    for (int i = 0; i <m ; ++i) {
        cin>>w[i];
    }
    int people=0;
    sort(h,h+n);
    sort(w,w+m);
    for (int i=0,j=0;i<n && j<m;j++)
    {
        if(w[j]>=h[i])
        {
            people++;
            i++;
        }
    }
    cout<<people<<endl;
    return 0;
}

