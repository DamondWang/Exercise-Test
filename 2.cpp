/*
 * ��һ��ͯ�ڣ���ʦ���˺ܶ�óԵ��ɿ������׶�԰��ÿ���ɿ���j������Ϊw[j]������ÿ��С����i�������ֵ����ɿ�����С�ﵽh[i] (��w[j]>=h[i])��
 * ���Ż���ȥ���ݽ�Ŀ����ʦ��Ŀ���ǽ��ɿ����ַ��������ǣ�ʹ������С����̨���ݡ����Ա�֤ÿ��w[i]> 0�Ҳ��ܽ�����ɿ����ָ�һ�����ӻ�һ��ָ�������ӡ�
 * ���룺��һ�У�n����ʾh����Ԫ�ظ���
        �ڶ��У�n��h����Ԫ��
        �����У�m����ʾw����Ԫ�ظ���
        �����У�m��w����Ԫ��

        3
        2 2 3
        2
        3 1
    �������̨����ѧ������
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

