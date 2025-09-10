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

int max_of_four(int a, int b, int c, int d){
    int vals[] = {a, b, c, d};
    valarray<int> valArr (vals, 4);
    return valArr.max(); 
}

int main(){

optimize();

int a,b,c,d;
cin>>a>>b>>c>>d;
int ans=max_of_four(a,b,c,d);

cout<<ans<<"\n";

return 0;
}
