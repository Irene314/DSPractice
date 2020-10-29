#include <iostream> 

using namespace std; 

const int i=3;
const int j=2;
int x,y;
int array[]={1,2,3,4,5,6};

int get(int i,int j)
{
	return array[y*i+x];
}

void set(int i,int j,int v)
{
	array[y*i+x]=v;
}

void dump()
{
	for(y=0;y<j;y++)  
	{ 
		for(x=0;x<i;x++)  
		{      
			cout<<"array["<<y<<"]"<<"["<<x<<"]"<<"="<<array[y*i+x]<<"  ";
		}    
		cout<<endl;
	}
}

int main()
{
 	dump();
}

