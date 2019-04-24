/* using bitwise & to find odd number
 * all binary odd number ending 1
 * */

#include<iostream>

using namespace std;

int main ( int argc, char *argv[])
{
	int num;
	cout<<"enter number"<<endl;
	cin>>num;

	if(num & 1)
		cout<<"odd number"<<endl;
	else
		cout<<"even number"<<endl;
	return 0;
}
