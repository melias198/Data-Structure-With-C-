/*
Time complexity:-->O(logn)

int k=1;
while(k<=n){
	cout<<k<<endl;
	k=k*2;
}

*/
/*
Time complexity:-->O(n^2)

for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            cout << i << j;

*/
/*
Time complexity:-->O(n^3)
for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;

*/
/*
Time complexity:-->O(nlogn)

for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j*2){
   		cout<<i<<j<<endl;
	}
}
*/
/*
Time complexity:-->O(n^2)

for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j+i){
   		cout<<i<<j<<endl;
	}
}
*/
/*
Time complexity:-->O(n^2)

for(int i=1;i<=n;i++)
{
	if(builtin_popcount(i) == 1)
	{
		for(int j=1;j<=n;j++)
			cout<<i<<j<<endl;
	}
}
Note: builtin_popcount(i) returns the number of set bits in 'i'.
For example, builtin_popcount(5) = 2. Because, 5 = (101)2. So there are 2 set bits in 5. 
*/