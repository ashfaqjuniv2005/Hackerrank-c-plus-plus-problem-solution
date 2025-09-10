#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lttc ll t;cin>>t; while(t--)
#define vll vector<long long>
#define vi vector<int>
#define rip(i,n) for(int i=0;i<n;i++)
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define pb push_back
#define ppb pop_back
#define tt int t;cin>>t;while(t--)
#define fr(i,n) for(int i=1;i<=n;i++)
#define optimize() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void ans(int *a, int *b){
   int j,k;
   j=(*a+*b);
   k=abs(*a-*b);
   *a=j;
   *b=k;
}
int main(){

optimize();

int a,b;
int *pa=&a,*pb=&b;
cin>>a>>b;
ans(pa,pb);
cout<<a<<"\n"<<b<<"\n";

return 0;
}
