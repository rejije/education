#include <iostream>
int min(int arr[], int a) {
	int summ = 0;
	for (int i = a; i < a + 10; i++)
		summ += arr[i];
	int a = 0;
	if (a < 91)

		min(arr[], a + 1);

}

 /* int sum(int arr[], int a) {
	int summ = 0;
	for (int i = a; i < a+10; i++)
		summ += arr[i];
	int a = 0;
	return ;
}
*/



int main()
{
	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 9 + 1;
		std::cout << arr[i];
	}

}
