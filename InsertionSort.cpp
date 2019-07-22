#include<iostream>
using namespace std;
void display(int k[],int m){
	int i,j,key;
	for ( i=1;i<m;i++){
		key = k[i];
		j = i - 1;
		while ( j >=0 && k[j] > key){
			k[j+1] = k[j];
			j = j - 1;
		}
		k[j+1] = key;
	}
	for ( i=0;i<m;i++){
		cout << k[i]<<"\n";
	}
}
int main(){
	int a[100],i,n;
	cin >> n;
	for (i=0;i<n;i++){
		cin >> a[i];
	}
	display(a,n);
}
