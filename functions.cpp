#include <iostream>
using namespace std;

bool checkprime(int n);

int main()
{
  int n, i;
  bool flag = false;
  
  cout << "Enter a positive number: ";
  cin >> n;
  
  for(i = 2; i <= n/2; ++i)
  {
    if (checkprime(i))
    {
       if (checkprime(n - i))
       {
          cout << n << " = " << i << " + " << n-i << endl;
          flag = true;
       }
    }
  }
  
  if (!flag)
    cout << n << " can't be expressed as sum of two prime numbers.";
    
    
    return 0;
}
  
