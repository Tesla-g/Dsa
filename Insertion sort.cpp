#include<bits/stdc++.h>
#define fast_io  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define l1 long long
using namespace std;

int main()
{
    fast_io
int a[]={8,5,7,3,2};
int n=sizeof(a)/sizeof(a[0]);
//first element is sorted and change the value and swap
//traver thorught the sorted list
for(int i=1;i<n;i++){
	int current=a[i];
	int j=i-1;
	while(j>=0 && a[j]>current){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=current;
}
for(int k=0;k<n;k++){
	cout<<a[k]<<" ";
}


	return 0;
}


