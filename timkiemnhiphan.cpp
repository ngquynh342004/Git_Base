
// Hay tim so n trong mang.
#include<bits/stdc++.h>
using namespace std;
// Thuc hien de quy
int dequy(int a[],int left, int right, int x){
	 	while (left<= right){
	 		int mid = (left + right )/2;
	 		if (a[mid]==x){
	 			return mid; // tim thay x , tra ve mid la vi tri cua x trong mang a
			 }
			if (a[mid]>x){
	 			return dequy(a,left,mid-1,x);
		 }
		 else 
		 return dequy(a,mid+1,right,x);
	}
	return -1;
	 }

int main(){
	int a[10] = {1,3,5,7,9,11,13,15,17,18};
	int n=sizeof(a)/sizeof(a[0]);
	int x ;
	cout <<"nhap so can tim kiem ";
	cin>>x;
	int result = dequy(a,0,n-1,x);
	if (result == -1 ){
		cout <<x<<"khong xuat hien";
	}
	else {
		cout <<x<<" xuat hien tai vi tri thu "<<result;
	}
	return 0;
}
