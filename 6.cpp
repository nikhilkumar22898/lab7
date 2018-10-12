//library
//Q.6). Write a C++ program to find reverse of any number using recursion.

#include<iostream>

using namespace std;

//write a function that calculates and returns the remainder of the number after dividing it by 10

int remainder(int n){
	int a;
	if(n%10==0){
	}
	else{ 
		a=n%10;
		cout<<a;
		int b=n/10;
//repeat the above functions by recursion
			return remainder(b);
		
	}
}

//write the main function
int main(){

int a,z;
	cout<<"Enter the number to be reversed"<<endl;
	cin>>a;
	
//call the above functions
	remainder(a);
	cout<<" is the reverse of the number provided"<<endl;
return 0;
}
