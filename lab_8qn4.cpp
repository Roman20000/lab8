//including library
#include <iostream>
using namespace std;

//for max
int max(int a[], int b){
	return a[b-1];
}

//for min
int min(int a[], int b){
	return a[0];
}

int merge(int a[], int b[],int aub[], int x,int y,int z){
	z = x + y;
	for(int n=0; n<x; n++){
		//using elements of a to fill till x
		aub[n] = a[n];}
	for(int n =0; n<y; n++){
		//using elements of b to fill from x+1 to z
		aub[n+x] = b[n];
	}
}


int bubblesort(int a[], int x){
	for(int n=0; n<x; n++){
		for(int m=n+1;m<x; m++){
			if(a[m] < a[n]){
			int g = a[m];
			//arranging numbers such that heavier numbers end up last
			a[m] = a[n];
			a[n] = g;
			}
		}
	}
}
	

//including main function

int main(){
	int x;
	//asking user to define the array    
	cout <<" Please enter the number of terms to be in array"<<endl;
	cin >>x;
	int arr1[x];
	cout <<" Please enter the numbers now"<<endl;
	for(int n=0;n<x;n++)
	cin >>arr1[n];


	int y;    
	//asking user to define the array
	cout <<" Please enter the number of terms to be in 2nd array"<<endl;
	cin >>y;
	int arr2[y];
	cout <<" Please Please enter the numbers now"<<endl;
	for(int n=0;n<y;n++)
	cin >>arr2[n];
	int z = x + y;
	int aub[z];
	
	merge(arr1, arr2, aub,x ,y, z);
	bubblesort(aub, z);
	int w = max(aub, z);
	int h = min(aub, z);
	cout <<" the maximum number is " << w <<endl;
	cout <<" the minimum number is " << h <<endl;
	
}
