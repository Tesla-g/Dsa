#include<bits/stdc++.h>
#define fast_io  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define l1 long long
using namespace std;

int main()
{
	fast_io

	int a[] = {8, 5, 7, 3, 2};

	int n = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
//first case

	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - 1 - j; i++) { //n-1-j on every pass one comparison should be reduced
			if (a[i] > a[i + 1]) {
				int temp;
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}




//if(a[0]>a[1]){
//		temp=a[0];
//		a[0]=a[1];
//		a[1]=temp;
//}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

