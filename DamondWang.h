/*
 * ������ DamondWang��2019���д
 * c++���ô���ʼ�
 */

#include <iostream>

//˳������  ����������ͷ�ļ�
#include <vector>
#include <stack>
#include <map>      //��ϣ����ֵ��
#include <list>    //˫��������������ɾ��
#include <string>
#include <set>    //Ԫ�ز������ظ�
#include <algorithm>

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <fstream>

#include <bits/stdc++.h>   //����ͷ�ļ�

using namespace std;//����ʹ�ã����ܻ����������ͻ�����Խ���ʹ��std::cout,std::cin�ȱ�ʾ

//���Դ���ӿ������ٶ�
static const auto io_sync_off = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}( );

int strtoint(string str)   //�ַ���ת��Ϊ����
{
    stringstream ss;
    int value;
    ss<<str;
    ss>>value;
    ss.str("");
    ss.clear();
    return value;
}

//����������������  ��0��ʼ�㣬�к���
#define MAX 51
long long cnk[MAX][MAX]={0};

void buildY()
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

//����С��λ��
//double p;
//cout.precision(6);С����λ��
//cout<<fixed<<p<<endl;


//������ϣ�����ģ����
template <typename T>
void showset(set<T> s)
{
    for(auto iter=s.begin();iter!=s.end();++iter)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}

//getline(cin,str);//����һ�д��ո���ַ�����

//transform(str[i].begin(),str[i].end(),str[i].begin(),::tolower);  ���ַ����任��Сд

