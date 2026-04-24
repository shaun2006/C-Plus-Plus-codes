#include <iostream>
#include <cmath>
#include <bitset>
#include <string>
using namespace std;

int main(){
  int m;
  cin >> m;
  cout << bitset<64>(m).to_string().substr(64 - (int)(log2(m)) - 1) << endl;
  return 0;
  
}
