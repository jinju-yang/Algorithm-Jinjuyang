#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int N;
long long ans{0};
vector<int> v[4],cmp;

void Init(){
   cin>>N;
   for(int i=0; i<4; i++){
      v[i].resize(N+1);
   }
   for(int i=0; i<N; i++){
      for(int j=0; j<4; j++){
         cin>>v[j][i];
      }
   }
}

void Solve(){
   for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
         cmp.push_back(v[2][i]+v[3][j]);
      }
   }
   sort(cmp.begin(),cmp.end());
   for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
         int tmp = v[0][i]+v[1][j];
         int lo_idx = lower_bound(cmp.begin(),cmp.end(),-tmp)-cmp.begin();
         int up_idx = upper_bound(cmp.begin(),cmp.end(),-tmp)-cmp.begin();
         ans+=(up_idx-lo_idx);
      }
   }
   cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Init();
    Solve();
   
    return 0;
}