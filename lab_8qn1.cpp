//including library
#include <iostream>
using namespace std;

//writing function that will find the sum of elements

int sum(int a[], int b){
	int s=0;
	for(int n=0;n<b;n++)
	s+=a[n];
	return s ;
}
// main function
int main(){
	int x;   
	
	//asking the user to provide the no. of elements in the array
	cout <<" Please enter the number of terms of the array "<<endl;
	cin >>x;
	int arr[x];
	cout <<" Please enter the elements of array "<<endl;
	
	//asking for elements in array
	for(int n=0;n<x;n++)
	cin >>arr[n];
	int ele = sum(arr, x);
	cout <<" Their sum is " <<ele<<endl;

 	//end
	return 0;
}

