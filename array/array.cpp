#include <iostream> 

using namespace std; 

int get(int p,int i,int j)
{
	return p;
}

void set(int p,int i,int j,int v)
{
	p=v;
}

void dump(int *p,int i,int j)
{
	for(int y=0;y<j;y++)  
	{ 
		for(int x=0;x<i;x++)  
		{      
			cout<<"array["<<y<<"]"<<"["<<x<<"]"<<"="<<p[y*i+x]<<"  ";
		}    
		cout<<endl;
	}
}

int main()
{
	const int i=3;
	const int j=2;
	int array[]={1,2,3,4,5,6};
	int *p=array;
 	dump(array,i,j);
}

