/*
Time complexity:-->O(logn)

int k=1;
while(k<=n){
	cout<<k<<endl;
	k=k*2;
}

Analysis:
k=1
1*2=2
2*2=2^2
2^2*2=2^3
........
k=2^a
the programme terminate when would be k>n
2^a>n
2^a=n
a=(2base)logn

*/
/*
Time complexity:-->O(n^2)

for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            cout << i << j;

Analysis:
nested outer for loop is O(n)
inner loop is:
when i=0,j=0,number of time =0
 i=1,j=0,1(terminate) number of time =1
 i=2,j=0,1,2(terminate)number of time =2
 i=3,j=0,1,2,3(terminate)number of time =3
 i=2,j=0,1,2,3,4(terminate)number of time =4
 and so on..........i=n,number of time n
 number of time=1+2+3+4+......+n=n*(n+1)/2=n^2
 outer and inner O(n+n^2)=O(n^2)
*/
/*
Time complexity:-->O(n^k)
for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;

Analysis:
nested outer for loop is O(n)
first inner loop is:
when i=0,j=0,number of time =0
 i=1,j=0,1(terminate) number of time =1
 i=2,j=0,1,2(terminate)number of time =2
 i=3,j=0,1,2,3(terminate)number of time =3
 i=2,j=0,1,2,3,4(terminate)number of time =4
 and so on..........i=n,number of time n
 number of time=1+2+3+4+......+n=n*(n+1)/2=n^2
second inner loop is:
when j=0,k=0,number of time =0
 j=1,k=0,1(terminate) number of time =1
 j=2,k=0,1,2(terminate)number of time =2
 j=3,k=0,1,2,3(terminate)number of time =3
 j=2,k=0,1,2,3,4(terminate)number of time =4
 and so on..........j=n,number of time n
 number of time=1+2+3+4+......+n=n*(n+1)/2=n^2
 outer and inner O(n*n^2*n^2)=O(n^5)

*/
/*
Time complexity:-->O(nlogn)

for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j*2){
   		cout<<i<<j<<endl;
	}
}
Analysis:
nested outer loop is O(n/2)=O(n)
inner loop is:
j=1
1*2=2
2*2=2^2
2^2*2=2^3
........
j=2^k
the programme terminate when would be j>n
2^k>n
2^k=n
k=(2base)logn
inner and outer is = O(n*logn)=O(nlogn)
*/
/* 
Time complexity:-->O(n)

for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j+i){
   		cout<<i<<j<<endl;
	}
}
Analysis:
nested outer loop is = O(n/2)= O(n)
inner loop is:
for every i,the inner loop run for a maximum of n/i=2 iterations..
inner and outer=O(n*2)=O(n)
for best case : O(n^2) when n=2,inner loop is n/1=n=n*n=n^2
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

Analysis:
nested outer loop is O(n)
inner loop is:
if condition is true the loop run for n time,so inner loop is O(n)
inner and outer is= O(n*n)=O(n^2)
in best case is=O(n)

Note: builtin_popcount(i) returns the number of set bits in 'i'.
For example, builtin_popcount(5) = 2. Because, 5 = (101)2. So there are 2 set bits in 5. 
*/