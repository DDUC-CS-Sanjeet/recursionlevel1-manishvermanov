#include<iostream>
using namespace std;
int fact_recursion(int);
int gcd_recursion(int ,int);
int pow_recursion(int,int);
int fib_recusrion(int);

int main()
{
	int result,choice;
	char ans='y';
	
	do{
		
	cout<<"\n1:To calculate Factorial\n";
	cout<<"2:To find GCD of two numbers\n";
	cout<<"3:To find Power\n";
	cout<<"4:To find Fibonacci series \n"; 
	
	cout<<"\nEnter you choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:	int num;
				 cout<<"\nEnter number to find factorial  : ";
				cin>>num;
				
				try 
				{
					if (num<0)
					throw "Invalid...";
					
					if(num==0)
					throw 1;
					
					result=fact_recursion(num);
					cout<<"Factorial from recusrion: "<<result<<endl;
				}
				
				catch (const char * a)
				{
					cout<<a;
				}
				
				catch (const int x)
				{
					cout<<"Factorial : "<<x;
				}
				
				break;
				
		case 2: int a,b;
				cout<<"\nEnter two numbers to find GCD  :  ";
				cin>>a>>b;
				
				try
				{ if(a==0||b==0)
					throw 0;
					
					result=gcd_recursion(a,b);
					cout<<"Gcd from recusrion : "<<result<<endl;
				}
				
				catch (const int x)
				{
					cout<<"GCD : "<<x;
				}
				
				break;
				
		case 3:	int base,pow;
				cout<<"\nEnter base : ";
				cin>>base;
				cout<<"Enter power : ";
				cin>>pow;
				
				try
				{
					if(base==0 && pow==0)
					throw "indeterminant form!!!";
					
					if(pow<0)
					throw 0;
					
					result=pow_recursion(base,pow);
					cout<<"\nPower from recusrion : "<<result;
				}
				
				catch (int a)
				{
					cout<<"\nPower from recusrion : 1/("<<pow_recursion(base,pow)<<")";
				}
				
				catch (const char * a)
				{
					cout<<a;
				}
				
				break;
				
		case 4: int n;	
				cout<<"Enter the number of terms for fibonacci : ";
				cin>>n;
				
				try
				{
					if(num<=0)
					 throw "Invalid input!!!!";
				
					for(int i=1;i<=n;i++)
					{
						cout<<fib_recusrion(i)<<" ";
					}
				}
				
				catch (const char * a)
				{
					cout<<a;
				}
				break;		
				
		default: cout<<"INvalid choice";
				break;
				
	}
		cout<<"\nDo you want to continue(y/n) : ";
		cin>>ans;
				
	}while(ans=='y'||ans=='Y');
		
	return 0;
}


int fact_recursion(int a)
{
	if(a==0)
	return 1;
	
	else	
	return a*fact_recursion(a-1);
	
}

int gcd_recursion(int a,int b)
{
	if(b==0)
	return a;
	
	else	
	return gcd_recursion(b,a%b);
}

int pow_recursion(int a,int b)
{
	b=(b<0)?-b:b;
	if(b!=0)
	return a*pow_recursion(a,b-1);
	
	else	
	return 1;	
}

int fib_recusrion(int term)
{	
	if(term==1)
		return 0;
		
	else if(term==2)
		return 1;
	
	return fib_recusrion(term-1)+ fib_recusrion(term-2);
	
}

