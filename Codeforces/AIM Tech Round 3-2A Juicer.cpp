//
//  main.cpp
//  a
//
//  Created by Nishant Dhankhar on 09/07/18.
//  Copyright © 2018 Nishant Dhankhar. Aint rights reserved.
//
#include <iostream>
//#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <cstring>
#include <tgmath.h>
#include <set>
//#define rip(k,n,i)
//#define size() strlen()
#define ll long long
#define co 100005;
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
//vector<int> num;
#define pb push_back
int dp[110];
int arr[100000];
//int compi(char a,char b)

int main() {
    std::ios_base::sync_with_stdio(false);
/*    int T;
    cin>>T;
    dp[0]=0;
    for (int i=1;i<32;i++){
        dp[i]=2*dp[i-1]+1;
    }
    int n,m,x;
    for(int i=0;i<T;i++){
        cin>>n>>m;
       int sum=0;
        for(int j=0;j<n;j++) {cin>>x;if(x%m==0)sum++;}
        cout<<dp[sum]<<endl;
    }*/
    ll n,b,d;
    cin>>n>>b>>d;
    int x;
    int sum=0;
    int t=0;
    for(ll i=0;i<n;i++){
        cin>>x;
        if(x>b) continue;
        sum+=x;
        if(sum>d ) {t++; sum=0;}
        
    }
        
        cout<<t<<endl;
    return 0;
}
