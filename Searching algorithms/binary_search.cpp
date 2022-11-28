#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key) {
	int start = 0;
	int end = n-1;
	
	while(start <= end ) {
		int mid = (start+end)/2;
		if(arr[mid] == key) return mid;
		else if(arr[mid] > key) end = mid - 1;
		else start = mid + 1;
	}
	return -1;
}
int linear_search(int arr[], int n, int key) {
	for(int i = 0; i < n; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}
int main() {
	int arr[5] = {1,2,4,5,6};
	int n = sizeof(arr)/sizeof(int);
	int key = 21;
	int index = binary_search(arr, n, key);
	if(index != -1) cout<<key<<" is at index "<<index<<endl;
	else cout<<key<<" is not present"<<endl;
}