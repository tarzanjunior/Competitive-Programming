//
//  main.cpp
//  a
//
//  Created by Nishant Dhankhar on 09/07/18.
//  Copyright © 2018 Nishant Dhankhar. All rights reserved.
//

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#include <iostream>
//#include <bits/stdc++.h>
#define FOR(i,k,n) for(int i=k;i<n;i++)
//#define size() strlen()
#define REV(x) reverse(x.begin(),x.end())
//#define ll %l64d
#define co 100005;
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
#define mp make_pair
#define SORT(x) sort(x.begin(),x.end())
//vector<int> num;
#define pb push_back
//int compi(char a,char b)
using namespace std;
#define ll long long
/*bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second < b.second);
}*/

/*ll gcd(ll a,ll b){
    if(a>b){
        return gcd(a-b,b);
    }
    if(a<b){
        return gcd(b-a,a);
    }
    return a;
}*/
int sum;
int r[1];
bool vis[27][27];
bool arr[27][27];
void dfs(int a, int b){

    if(a<0 || b<0||a>=r[0]|| b>=r[0] ) return;
    if(!arr[a][b]) return;
    if(vis[a][b]) return;
    vis[a][b]= true ; sum++;
    for(int i=-1;i<2;i++){
        for(int j=-1;j<2;j++){
            dfs(a+i,b+j);
        }
    }
}

int main() {
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
    int a;
    string x;
   // int temp;
    int count;
    int index=0;
  
    while (cin>>a){
        memset(vis,0,sizeof(vis[0][0]) * 26 * 26);
        index++;
        count =0;
        sum=0;
        r[0]=a;
        for(int i=0;i<a;i++){
            cin>>x;
            for(int j=0;j<a;j++) arr[i][j]=(bool)(x[j]-48);
                //cout<<arr[i][j];}//cout<<endl;
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
            sum=0;
                dfs(i,j);
                //cout<<sum<<" "<<i<<" "<<j<<endl;
            if(0<sum) count++;
            }
        }
        cout<<"Image number "<<index<<" contains "<<count<<" war eagles."<<endl;
        
    }

    
    return 0;
}
