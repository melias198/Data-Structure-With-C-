/*

**************
Time complexity: O(nlogn)

for(int k=1;k<=n;k=k*2)
{
	for(int i=1;i<=n;i++)
	{
		cout<<k<<" "<<i<<"\n";
	}
}
Analysis:
Outer loop is runs for--->logn times
Inner loop is runs for--->n times
The total complexity of this code segments: O(nlogn)
**************

**************
Time complexity: O(n)

for(int k=1;k<=n;k++)
{
	if(k==1){
		for(int i=1;i<=n;i++)
		{
			cout<<k<<" "<<i<<"\n";
		}
	}
}
Outer loop is runs for--->n times
Inner loop is runs for--->1 times (when k=1,which is mean constant O(1))
The total complexity of this code segments: O(n)
**************

**************
Time complexity: O(n^2)

for(int k=1;k<=n;k++)
{
	if(k%2==0){
		for(int i=1;i<=n;i++)
		{
			cout<<k<<" "<<i<<"\n";
		}
	}
}
Outer loop is runs for--->n times
Inner loop is runs for--->n times (when if condition is true,which is O(n))
The total complexity of this code segments: O(n^2)
**************

*/
