#include <iostream>
using namespace std;
//binary search
int main()
{
  int N, v[100001], x;
  cin>>N;
  for (int i = 1; i <= N; ++i)
    cin>>v[i];
  cin>>x;

  // first time we search in all string, from 1 to N
  int st = 1, dr = N, m;
  // As long as the subsequence has more than one element, we halve it by choosing either the left or right half.
  while (st < dr) {
    m = (st + dr) / 2; //middle
    if (v[m] < x)
      st = m + 1;
    else
      dr = m;
  }
  // we have reached a subdequence with one element
  if (v[st] == x)
    cout<<"x is found in string";
  else
    cout<<"x is not found in string";
  return 0;
}
