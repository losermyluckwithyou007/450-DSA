#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    //inputs   outputs
    // 1
    // 1 3
    // 1 5
    // 1        1
    // 3        3
    // 6       -1
	
	int t;
	cin>>t;

	while(t--){
		int n,q;
		cin>>n>>q;
		vector<pair<ll,ll> > v(n);
		for(int i=0;i<n;i++){
			ll x,y;
			cin>>x>>y;
			v[i] = {x,y};
		}

		sort(v.begin(), v.end());

		int idx=0;

		for(int i=1;i<n;i++){
			if(v[idx].second >= v[i].first){
				v[idx].second = max(v[idx].second, v[i].second);
			}
			else {
				idx++;
				v[idx].second = v[i].second;
				v[idx].first = v[i].first;
		    }
		}
		while(q--){
			ll k;
			cin>>k;
			ll ans = -1;
			for(int i=0;i<=idx;i++){
				if( (v[i].second - v[i].first +1) >= k ){
					ans = v[i].first+k -1;
					break;
				}
				else {
					k = k - (v[i].second - v[i].first +1);
				}
			}
			cout<<ans<<endl;
		}
	return 0;
}