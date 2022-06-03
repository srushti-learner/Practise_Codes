#include<iostream>
using namespace std;

int findcount(const int* a,int size, int b,bool searchFirst)
{
	int start=0;
	int end=size-1;
	int result=-1;
	while(start<=end)
	{
		int mid = start+((end-start)/2);
		if (a[mid]==b)
		{
			result=mid;
			if(searchFirst)
			{
				end=mid-1;
			}
			else
			{
				start=mid+1;
			}
		}
		else if (b<a[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		
	}
	return result;
}

int main()
{
	int arr[9]={4,4,9,9,9,9,11,11,67};
	int first=findcount(arr,9,11,true);
	if (first==-1)
	{
		cout<<"Number not present";
	}
	else
	{
		int last=findcount(arr,9,11,false);
		cout<<"Occurrence of 11 is "<<last-first+1;
	}

	return 0;
}
