#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr, int n, int key) {
	for(int i = 0; i < n; i++) if(arr[i] == key) return i;
	return -1;
	
}