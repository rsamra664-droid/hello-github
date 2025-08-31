#include<iostream>
using namespace std;
int main()
{   int size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
	cout<<"enter the value";
	cin>>arr[i];
	}
	int tar;
	cout<<"enter the target value"<<endl;
	cin>>tar;
	int mid;
	int loc=-1;
	int start=0;
	int end=size-1;
	while(start<=end)
	{   mid=(start+end)/2;
	    if(tar>arr[mid])
	    {
	    	if(arr[mid]<arr[mid+1])
	    	{
	    		start=mid+1;
			}
			if(arr[mid]>arr[mid+1])
	    	{
	    		end=mid-1;
			}
		}
		else if(tar<arr[mid])
		{
			if(arr[mid]<arr[mid+1])
	    	{
	    		end=mid-1;
			}
			if(arr[mid]>arr[mid+1])
	    	{
	    		start=mid+1;
			}		
		}
		else
		{
			loc=mid;
			break;
		}
	}
	if(loc==mid)
	{
		cout<<"value found at index:"<<loc<<endl;
	}
	else
	{
		cout<<"not found";
	}
	return 0;
}