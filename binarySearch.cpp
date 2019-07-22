#include<iostream>
using namespace std;
int binarySearch( int arr[],int ele,int l,int h){
	int mid;
	if ( h >= l ){
		mid = l + h /2;
		if ( arr[mid] == ele){
			return mid;
		}
		else if ( arr[mid] < ele){
			binarySearch( arr,ele,mid+1,h);
		}
		else{
			binarySearch( arr,ele,l,mid-1);
		}
	return -1;
	}	
}
int main() {
	int n;
	printf(" Enter no.of elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements");
	int i;
	int ele;
	for ( i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search");
	scanf("%d",&ele);
	int pos = binarySearch( a,ele,0,n);
	if ( pos == -1 ){
		printf("element is not found in the array");
	}
	else{
		printf("element is found at position at %d",pos);
	}
}
