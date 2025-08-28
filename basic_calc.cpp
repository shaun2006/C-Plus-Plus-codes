#include <iostream>
using namespace std;
int main(){
	int a,b,d;
	char c;
	cout << "Type 1st number: ";
	cin >> a;
	cout << "Type the operator (+, -, *, /): ";
	cin >> c;
	cout << "Type 2nd number: ";
	cin >> b;
	switch (c){
		case '+': d = a + b; break;
		case '-': d = a - b; break;
		case '*': d = a * b; break;
		case '/': 
			  if(b != 0){
				  d = a / b; break;
			  }
			else{
				cout << "can't divide by zero"; break;
				return 1;
			}
		default: 
			  cout << "Enter a valid operator" << endl;	
			  return 1;
	}
	cout << "Result = " << d;
	return 0;
}
