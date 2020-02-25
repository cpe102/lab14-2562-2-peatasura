#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=5;
	char b='A';
	
	char &c=b;
	int *x=&a;
	char *y=&b;
	int **z=&x;
	cout << "a = "<< a << endl <<"b= " <<b << endl << "c = " << c << endl << "x = " <<x << endl << "y = " << (void *)y << endl << "z = " <<z << endl;
	cout << "------------------------------\n";
	cout << "Address a =" << &a << endl << "Address b =" <<(void *)&b << endl << "Address c =" <<(void *)&c << endl <<"Address x =" << &x << endl << "Address y =" <<(void *)&y << endl <<"Address z =" << &z << endl;
	cout << "------------------------------\n";
	c='F';
	cout << "a = "<< a << endl <<"b= " <<b << endl << "c = " << c << endl << "x = " <<x << endl << "y = " << (void *)y << endl << "z = " <<z << endl;
	//cout << a << endl << b << endl << c << endl << x << endl << (void *)y << endl << z << endl;
	cout << "------------------------------\n";
	*y='W';
	cout << "a = "<< a << endl <<"b= " <<b << endl << "c = " << c << endl << "x = " <<x << endl << "y = " << (void *)y << endl << "z = " <<z << endl;
	//cout << a << endl << b << endl << c << endl << x << endl << (void *)y << endl << z << endl;
	cout << "------------------------------\n";
	*x=6;
	cout << "a = "<< a << endl <<"b= " <<b << endl << "c = " << c << endl << "x = " <<x << endl << "y = " << (void *)y << endl << "z = " <<z << endl;
	//cout << a << endl << b << endl << c << endl << x << endl << (void *)y << endl << z << endl;
	cout << "------------------------------\n";
	**z=7;
	cout << "a = "<< a << endl <<"b= " <<b << endl << "c = " << c << endl << "x = " <<x << endl << "y = " << (void *)y << endl << "z = " <<z << endl;
	//cout << a << endl << b << endl << c << endl << x << endl << (void *)y << endl << z << endl;
	cout << "------------------------------\n";


	
	
	return 0;
}
