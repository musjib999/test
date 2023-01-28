#include <iostream>
using namespace std;
int add(int ,int );
int sub(int x,int y);
int mul(int x,int y);
int divide(int x,int y);
int mod(int x,int y);
int main(){
char operato;
int sum;
int a,b;
cout<<"Enter x and y"<<endl;
cin>>a>>b;
cout<<"Enter your operator +,-,/,%,*"<<endl;
cin>>operato;
 switch(operato){
 	case '+':
 		sum=add(a,b);
 	cout<<"Addition of The Two numbers "<<a<< '+'<< b<<sum<<endl;
 	break;
	case '-':
 		sum=sub(a,b);
 	cout<<"Subtraction of The Two numbers "<<a<< '-'<< b<<sum<<endl;
 	break;
	case '*':
 		sum=mul(a,b);
 	cout<<"Multiplication of The Two numbers "<<"a * b ="<<sum<<endl;
 	break;
	case '/':
 		sum=divide(a,b);
 	cout<<"Division of The Two numbers "<<"a / b ="<<sum<<endl;
 	break;
	case '%':
 		sum=mod(a,b);
 	cout<<"Modulor of The Two numbers "<<"a % b ="<<sum<<endl;
 	break;
 	
 	
 	
 	
 
	 }
	 
	 }
int sub(int x,int y){
	int answer;
	answer=x - y;
	return answer;
	return 0;

	}
	int mul(int x,int y){
	int answer;
	answer=x * y;
	return answer;
	return 0;

	}
	int divide (int x,int y){
	double answer;
	answer=x / y;
	return answer;
	return 0;

	}
	int mod (int x,int y){
	double answer;
	answer=x % y;
	return answer;
	return 0;

	}



	int add(int x,int y){
		int answer;
		answer=x+y;
	return answer;
	}
