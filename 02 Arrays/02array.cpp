//this code is to illustrate call by reference 
#include<iostream>
using namespace std;

void printArray(int * arr,int n)//*arr is same as passing array int arr[]
	//here we are passing both arr and n
	//the size of array in the function is less than main cuz here the array is referenced by address  
       //passing n too gives the actual result 
{


	cout <<"In Function "<<sizeof(arr) <<endl;
	arr[0] = 100;//setting this to 100 gives result for function and main same that indicates that both are sharing the same memory
	for(int i=0;i<n;i++){
		cout << arr[i] <<endl; 
	}

}


int main(){

	int arr[] = {1,2,3,4,5,6};

	int n = sizeof(arr)/sizeof(int);


	
	printArray(arr,n);

	
	cout <<"In Main "<<sizeof(arr) <<endl;
	for(int i=0;i<n;i++){
		cout << arr[i] <<endl; 
	}

	


	return 0;
}
