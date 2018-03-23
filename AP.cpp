/*program to print an arithmetic progression*/
int main()
{
	long int SUM=0,N,A,D;
	cin>>N>>A>>D;
	if((isDigit(N))&&(isDigit(A))&&(isDigit(D)))
	sortArr(N,A,D);
	else
	cout<<"invalid input";	
	return 0;
}
int sortArr(long int N,long int A,int D)
{
	int sum;
	sum=2*A+(N-1)*D;
	cout<<sum;
	return 0;
}
