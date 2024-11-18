#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int so = 1; so < 10; so++)
		{
			cout << so << "*" << i << "=" << so * i<< "\t";
		}
		cout << endl;

	}
	return 0;
	
}