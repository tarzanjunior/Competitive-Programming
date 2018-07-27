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

//vector<int> num;
int dp[110];
int arr[100000];


int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a,b,f,k,ct;
    cin>>a>>b>>f>>k;
    if(k==1) {if(b<f || b<a-f) cout<<-1<<endl;
    else if(b>=a) cout<<0<<endl;
        else cout<<1<<endl;}
    else if(k==2) {
        if (b<f || b<2*(a-f)) cout<<-1<<endl;
        else if (b>=f && b<2*a-f) cout<<2<<endl;
        else if(b>=2*a-f&& b<2*a) cout<<1<<endl;
        else if(b>=2*a) cout<<0<<endl;
     }
     else if (b<2*f || b<2*(a-f)) cout<<-1<<endl;
     else if(1==1) {
    ll l=b;
    l-=f;//cout<<l<<endl;
    ct=0;
    for(ll i=0;i<k-1;i++){
        if(i%2==1){l-=2*f; /*cout<<"1 "<<i<<" way"<<l<<endl;*/ if(l<0) {l=b-2*f; ++ct; //cout<<l<<" "<<ct<<" "<<1<<endl;
            
        } }
        else if(i%2==0) {l-=2*a-2*f; /*cout<<"2  "<<i<<" way"<<l<<endl;*/ if(l<0){ l=b-2*a+2*f; ++ct;//cout<<l<<" "<<ct<<" "<<2<<endl;
            
        }}
    }
         if(k%2==0){
    l-=f;
         if(l<0) ct++;
         }
         if(k%2==1){
             l-=a-f;
             if(l<0) ct++;
             }
        // cout<<l10 4 6 1010 4 6 10<<endl;
    cout<<ct<<endl;
     }
    
    return 0;
    
}
