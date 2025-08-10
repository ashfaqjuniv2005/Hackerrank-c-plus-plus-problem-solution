#include<bits/stdc++.h>
using namespace std;

#define optimization() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pn pop_back

int main()
{
  optimization();
int n; cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
reverse(a.begin(),a.end());
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

return 0;
}
