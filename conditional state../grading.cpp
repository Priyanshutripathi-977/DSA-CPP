#include <iostream>
using namespace std;
/*for multiple conditions we use
if(condition){
} else if(condition){
} else if(condition){
} .
  .
} else {

}*/
int main()
{
  int marks;

  cout << "enter the marks :";
  cin >> marks;

  if (marks >= 90)
  {
    cout << "A grade\n";
  }

  return 0;
}