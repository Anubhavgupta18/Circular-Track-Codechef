#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,m,c,d;
	    cin>>a>>b>>m;
	    c=min(a,b);
	    d=max(a,b);
	    cout<<min(abs(d-c),abs(c+m-d))<<endl;
	}
	return 0;
}
