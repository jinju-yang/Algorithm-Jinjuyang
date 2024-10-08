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
#include <math.h>
using namespace std;
#define N 300000

typedef long long L;
int n,i,c;
L s,l,r=1e12,m,a,b,d[N],e[N];

L x(int p,int o){
    return abs(d[c+p]-(m+o))+abs(e[c+p]-(m+o))+(p?abs(d[c-p]-(m+o))+abs(e[c-p]-(m+o)):0);
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    cin>>n;
    
    for(c=n/2;i<n;i++)cin>>d[i];
    for(i=0;i<n;i++)cin>>e[i];
    
    while(l<=r){
        m=(l+r)/2;
        a=x(0,0);b=x(0,1);
        for(i=1;c+i<n;i++){
            a+=x(i,i);
            b+=x(i,i+1);
        }
        
        if(a<b)s=a,r=m-1;
        else s=b,l=m+1;
    }
    cout << s;
}