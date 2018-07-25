//
//  main.cpp
//  a
//
//  Created by Nishant Dhankhar on 09/07/18.
//  Copyright Â© 2018 Nishant Dhankhar. All rights reserved.
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
#define fori(i,n) for(int i=0;i<n;i++)
#define mp make_pair
#define SORT(x) sort(x.begin(),x.end())
//vector<int> num;
#define pb push_back
int dp[110];
 
bool arrn[100000];
bool arrm[100000];
//int gcd(int x,int y){
  //  if(x>y) return gcd(x-y,y);
  //  else if(y>x) return gcd(y-x,x);
   // else return x;
//}
//int compi(char a,char b)
using namespace std;
//#define ll long long
/*bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second < b.second);
}*/
 
 
int main() {
    
    int t,m,n;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        bool arr[n][m];
        bool p=false;
        for(int j=0;j<n;j++){
            cin>>s;
            for(int k=0;k<m;k++){
                if(s[k]=='1'){arr[j][k]=true;}
                if(s[k]=='0'){arr[j][k]=false;}
                if(arr[j][k]) p=true;
            }
        }
        //cout<<endl;
        if(!p){
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    cout<<"-1"<<" ";
                }
                cout<<endl;
            }
            continue;
        }
        bool sum;
        for(int j=0;j<n;j++){
            sum=false;
            for(int k=0;k<m;k++) {if(arr[j][k]){sum=true; break;}}
            arrn[j]=sum;
            //cout<<sum<<" ";
        }
        //cout<<endl;
        for(int j=0;j<m;j++){
            sum=false;
            for(int k=0;k<n;k++) {if(arr[k][j]){sum=true; break;}}
            arrm[j]=sum;
            //cout<<sum<<" ";
        }
        
        for(int j=0;j<n;j++){
            for(int k=0;k<m-1;k++){
                if(arr[j][k])cout<<0<<" ";
                else if(!arr[j][k]&&(arrn[j]||arrm[k]))cout<<1<<" ";
                else cout<<2<<" ";
            }
                if(arr[j][m-1])cout<<0;
                else if(!arr[j][m-1]&&(arrn[j]||arrm[m-1]))cout<<1;
                else cout<<2;
            cout<<endl;
        }
        }
        return 0;
    }
 
