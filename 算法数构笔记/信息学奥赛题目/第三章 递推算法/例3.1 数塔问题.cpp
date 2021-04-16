// 倒推法
 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,j,i,a[101][101];
	
	cin >> n;
	for(int i = 1;i <= n;i ++ )
		for(j = 1; j <= i; j ++ )
		cin >> a[i][j];
	printf("%d",a[n-1][1]);
	system("pause"); 
	for(int i = n-1;i >= 1; i -- )
		for(int j = 1; j <= i; j ++ )
		{
			if(a[i+1][j] <= a[i+1][j+1]) a[i][j] += a[i+1][j+1];
			else a[i][j] += a[i+1][j];
		}
	
	// a[1][1] 为所求的数字总和的最大值 
	cout << a[1][1] << endl;	
	
	return 0;
}
