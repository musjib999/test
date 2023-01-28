#include <iostream>
using namespace std;

int main(){
	int x , y,sum,subtraction,multiplication,modulo,division;
	cout<<"enter the first numbers"<<endl;
	cin>>x>>y;
	sum=x+y;
	cout<<x<<"+"<<y<<"="<<sum<<endl;
	subtraction=x-y;
	cout<<x<<"-"<<y<<"="<<subtraction<<endl;
	multiplication=x*y;
	cout<<x<<"*"<<y<<"="<<multiplication<<endl;
	modulo=x%y;
	cout<<x<<"%"<<y<<"="<<modulo<<endl;
	division=x/y;
	cout<<x<<"/"<<y<<"="<<division;
	return 0;	

}
