/*
    Halil Çetiner
    Data Structures and Algorithms Assignment
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

int	n,m,t,s;
vector< pair<int,int> >	v[200000];
int	dp[200000],vis[200000];

int	bul( int nod ){
	if( nod==t )	return	0;
	if( vis[nod] )	return	dp[nod];
	dp[nod] = -INT_MAX;
	vis[nod] = 1;
	for( auto i:v[nod] )
		dp[nod] = max( dp[nod],bul( i.first )+i.second );
	return	dp[nod];
}

int main(int argc,char** argv){

	freopen(argv[1],"r",stdin);
	freopen(argv[2],"w",stdout);

	cin >> n >> m >> s >> t;
	
	for( int i=1;i<=m;i++ ){
		int	x,y,c;
		scanf(" %d %d %d",&x,&y,&c);
		v[x].push_back(make_pair(y,c));
	}
	int	r = bul( s );
	if( r<0 )	cout << -1 << endl;
	else	cout << r << endl;

}
