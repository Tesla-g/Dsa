//Given input array, find the count of pairs which has sum K

#include<bits/stdc++.h>
#define fast_io  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define l1 long long
using namespace std;

int main()
{
       int a[]={1,2,3};
int n =  sizeof(a)/sizeof(a[0]);
int k=3;
int count=0;
for(int i=0;i<n;i++){
		if(a[i]==k){
		count=count+1;
	}
	if(a[i]+a[i+1]==k &&i<n-1){
			count=count+1;
	}


}
cout<<count;
	return 0;
}


