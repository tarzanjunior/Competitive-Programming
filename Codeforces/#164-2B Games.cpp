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
    cin.tie(0);
    int sum=0;
    int n;
    int a;
    int b;
    cin>>n;
    int pap[100];
    int bap[100];
    for(int i=0;i<100;i++){
        bap[i]=0;pap[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>a>>b;
        pap[a-1]++;
        bap[b-1]++;
    }
    for(int i=0;i<100;i++){
        sum+=pap[i]*bap[i];
    }
    
    
        cout<<sum<<endl;
    
    return 0;
}
