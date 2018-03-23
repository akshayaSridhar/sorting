/*program to sort an array of size N*/
int main()
{
	long int SUM=0,N,A,D;
	cin>>N>>A>>D;
	sortArr(N,A,D);
	return 0;
}
int sortArr(long int N,long int A,int D)
{
	int sum;
	sum=A+(N-1)*D;
	cout<<sum;
	return 0;
}
