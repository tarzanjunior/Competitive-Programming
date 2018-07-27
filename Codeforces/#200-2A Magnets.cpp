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

int dp[110];
int arr[100000];
//int compi(char a,char b){



int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b,sum;
    cin>>n;
    sum=1;
    if(n==1) cout<<1<<endl;
    else{
        cin>>a;
    for(int i=1;i<n;i++){
        if(i%2==0) cin>>a;
        if(i%2==1) cin>>b;
        if(b!=a) sum++;
    }
        cout<<sum<<endl;
    }
    return 0;
    
    
}
