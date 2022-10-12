#include<iostream>

using namespace std;

int main()
{
	 float x[100], y[100], Xn, Yn=0, p;
	 int i,j,n;
	 cout<<"Enter number of data: ";
	 cin>>n;
	 cout<<"Enter data:"<< endl;
	 for(i=1;i<=n;i++)
	 {
		  cout<<"x["<< i-1<<"] = ";
		  cin>>x[i];
		  cout<<"f[x"<< i-1<<"] = ";
		  cin>>y[i];
	 }
	 cout<<"Enter the value of x: ";
	 cin>>Xn;

	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (Xn - x[j])/(x[i] - x[j]);
			   }
		  }
		  Yn = Yn + p * y[i];
	 }
	 cout<<"value of f["<< Xn<< "] is :"<< Yn<<endl;

	 return 0;
}