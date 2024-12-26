#include <iostream>

using namespace std;

int sumsum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}

int avgavg(int sum, int size)
{
	int avg = 0;

	avg = sum / size;

	return avg;
}

int main()
{
	int arr[5];
	int size, sum, avg = 0;
	
	cout << "입력을 원하는 숫자의 개수 : ";
	cin >> size;
	cout << "숫자" << size <<"개를 입력하시오." << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	sum = sumsum(arr, size);
	avg = avgavg(sum, size);
	cout << "합 : " << sum << endl;
	cout << "평균 : " << avg << endl;
	return 0;
}