#include <bits/stdc++.h>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a>>b;
  int len_a=a.size();
  int len_b=b.size();
  string c=a+b;
char a1=a[0];
char a2=b[0];
   a[0]=a2;
   b[0]=a1;

  cout<<len_a<<" "<<len_b<<"\n";
  cout<<c<<"\n";
  cout<<a<< " " <<b<<"\n";
    return 0;
}
