#include <iostream>
using namespace std;
int Max(int[], int);
void GetArray(int[], int);
void Print_Ascending(int[], int);
int main()
{
	const int size = 10;
	int array[10];
	cout << "Please give me 10 numbers : \n";
	GetArray(array, size);
	Print_Ascending(array, size);
	cout << "The maximum value of the array is : " << Max(array, size) << endl;
	return 0;
}

void GetArray(int a[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cin >> a[i];
	}
	return;


}

int Max(int a[], int len)
{
	int max = a[0];
	{ for (int i = 0;i <len-1;i++)
	{
		max >= a[i + 1] ? max = max:max=a[i+1] ;
	}
	return max;}
}

void Print_Ascending(int a[], int len) {
	cout << "Index Ascending : ";
	for (int i = 0;i<len;i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
	return;
}

