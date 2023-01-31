#include <iostream>
using namespace std;
int main()
{
    int num, sum=0;
    do 
    { 	
		cout<<"Enter a number: ";
      	cin>>num;
      	if (num>0)
      	{
		  	sum=sum+num;
		}
    }
	while (num!=0);
	
    cout<<"\nThe sum is: "<<sum;
    
    return 0;
}
