#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    int a[10]={0};
    for (int i = 0; i <n ; ++i) {
        a[v[i]]++;
    }
    int i;
    for (i = 0; i <10 ; ++i) {
        if(a[i]%2!=0 && a[i]!=0)
            break;
    }
    cout<<i<<endl;
    return 0;
}
