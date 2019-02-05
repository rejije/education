#include <iostream>

int main()
{
	const int N = 5;
	int a = 0,k=0, arr[N] = { 5, 1, 4, 2, 6 };

		for (int i = 0; i <N; i++){
	//		for(int j=0; j<N/2; j+=2 )
			if ((i+1)!= N && arr[i] > arr[i + 1]) {
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a;
			}
	}
		
	for (int i = 0; i < N; i++)
		std::cout << arr[i] << " ";
	return 0;
}
