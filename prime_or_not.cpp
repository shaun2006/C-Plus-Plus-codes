#include <iostream>

using namespace std;

int main(){
  int n,i;
  bool is_prime = true;
  cin >> n;
  if(n<=1)
    {
      is_prime = false;
    }
  for(i = 2; i < n; i++)
    {
      if(n%i == 0)
	{
	  is_prime = false;
	}
  }
  if(is_prime)
    {
      cout << "Prime" << endl;
  }
  else
    {
      cout << "Not a Prime" << endl;
  }

}
