//library
//Q.4)Write a C++ program to find sum of all natural numbers between 1 to n using recursion.

#include<iostream>

using namespace std;

//write the function
//f(n)=n+f(n-1)
int sum(int n){

//stoppin condition
	if(n==1){
		return 1;
	}
	else{
//converting problem into function
	
		return n+ sum(n-1);
	}
	
}
//write main function
int main(){
	int n;
//ask user for upper limit
	cout<<"Enter the upper range."<<endl;
//take in the value given by the user
	cin>>n;
//call the function
	sum(n);
//print the sum
	cout<<sum(n)<<" is the sum of all natural numbers untill "<<n<<endl;
//return
return 0;
}
