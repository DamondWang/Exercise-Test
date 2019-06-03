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
#include <iomanip>
#include <typeinfo>
using namespace std;
int main()
{
    string v="abcdefghijk";
    v.erase(0,1);
    for (int i = 0; i <v.size() ; ++i) {
        cout<<v[i]<<" ";
    }
    return 0;
}