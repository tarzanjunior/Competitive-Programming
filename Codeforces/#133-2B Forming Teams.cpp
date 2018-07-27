//
//  main.cpp
//  IOI Goals
//
//  Created by Nishant Dhankhar on 25/07/18.
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
vector<int> adj[102];
bool vis[120];
int sum;
//sum=0;
bool color[120];
void dfs(int a){
    if(vis[a]) {return;}
    vis[a] = true;
    for(auto x: adj[a]){
        if(!vis[x]) {color[x]=!color[a]; dfs(x);}
        else if(vis[x]) {
            if((color[x]&&color[a])^(!color[x]&&!color[a])) sum++; //cout<<a<<" "<<x<<" ";}
        }
    }
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
    sum=0;
    //vector<int> adj[n];
    
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b; adj[a].pb(b);
        adj[b].pb(a);
    }
    //int sum;
    for(int i=1;i<=n;i++){
        if(!vis[i]){color[i]=true; dfs(i);}//cout<<i<<sum<<endl;}
    }
    sum=sum/2;
    if((n-sum)%2==1) sum++;
    cout<<sum<<endl;
    return 0;
}
