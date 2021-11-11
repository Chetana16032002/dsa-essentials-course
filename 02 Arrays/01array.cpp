
#include<iostream>
using namespace std;


int main(){

	int marks[100] = {-1};// here we have initialized  array to -1 so remaining elements woiuld be printed as -1 instead of garbage values 

	int n;
	cout<<"Enter the no of students ";
	cin>>n;


	//Input
	for(int i=1; i<=n; i++){
		cin>> marks[i];

		marks[i] = marks[i]*2;//Update
	}

	 


	
	for(int i=0;i<100;i++)//here the other values within the range of 100 would be garbage value 
	{
		cout<< marks[i] <<" ,";//Output
	}

	cout <<endl;


	return 0;
}
