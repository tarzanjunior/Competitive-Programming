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
#define ll %l64d
#define co 100005;
using namespace std;
//#define fori(i,n) for(int i=0;i<n;i++)
#define mp make_pair
#define SORT(x) sort(x.begin(),x.end())
//vector<int> num;
#define pb push_back
int dp[110];
int arr[100000];
//int gcd(int x,int y){
  //  if(x>y) return gcd(x-y,y);
  //  else if(y>x) return gcd(y-x,x);
   // else return x;
//}
//int compi(char a,char b)
using namespace std;
#define ll long long
/*bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second < b.second);
}*/

int main() {
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n/2) cout<<2*k-1<<endl;
        else cout<<2*(k-n/2)<<endl;
    }
    if(n%2==1){
        if(k<=(n+1)/2) cout << 2*k-1<<endl;
        else cout<<(k-(n+1)/2)*2<<endl;
    }
    return 0;
}
