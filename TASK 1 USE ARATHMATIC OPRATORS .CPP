#include<iostream>

using namespace std;

class A{
	public :
		int y;
		int x;
		int j;
		int k;
		void calculate (int a , int b){
			k = a / b;
		}
		void calculate(int a,int b,int c){
			j = a - b - c;
			
		}
		void calculate(int a,int b,int c,int d){
			x = a*b*c*d;
		}
		void calculate(int a,int b,int c,int d,int e){
			y = a + b + c + d + e;
		}
};

class B : public A{
	public :
		void calculate(){
	
			cout<<"Divison Of Two Number Is :- "<<k<<endl;
			cout<<"Subtraction Of Three Number Is :- "<<j<<endl;
			cout<<"Multiplication Of Four Number Is :- "<<x<<endl;
			cout<<"Addition Of Five Number Is :- "<<y<<endl;
			
			
		}
};
int main(){
	int m,l,n,o,p;
	cout<<"Enter Value Of A :- ";
	cin>>m;
	cout<<"Enter Value Of B :- ";
	cin>>l;
	cout<<"Enter Value…
	
	
	
}
