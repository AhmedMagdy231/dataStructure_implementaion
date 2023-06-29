
#include <iostream>
#include "stack.h"
using namespace std;


int main()
{
  

	stack<int> s;
	s.push(5);
	s.push(6);
	s.push(8);
	s.push(11);
	s.push(50);

	s.print();
	s.pop();
	s.print();
	
	
	


  system("pause");
  return 0;
}

