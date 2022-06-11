#include <iostream>
#include <stack>
using namespace std;


int main()
{
	stack<int> max;
	stack<int> track;
	max.push(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			int x;
			cin>>x;
			if(x>=max.top())
			{
				max.push(x);
			}
			track.push(x);
		}
		else if(a==2)
		{
			if(track.top()==max.top())
			{
				max.pop();	
			}
			track.pop();
		}
		else if (a==3)
		{
			cout<<max.top()<<endl;
		}		
	}
	return 0;
}


