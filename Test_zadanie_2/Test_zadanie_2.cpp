#include <iostream> 
#include <Windows.h> 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int array_1[10];
	int array_2[10];
	
	cout << "Введите первый элемент первого массива: "; 
	cin >> array_1[0];

	cout << "Первый массив: " << endl; 
	int temp = array_1[0];
	for (int i = 0; i < 10; i++, temp += 2) {
		array_1[i] = temp;
		cout << array_1[i] << " ";
	}
	cout << endl; 

	cout << "Второй массив: " << endl;
	temp = 0;
	for (int i = 0; i < 10; i++, temp += 2) {
		array_2[i] = temp;
		cout << array_2[i] << " ";
	}
	cout << endl; 

	vector<int> v(20);

	sort(array_1, array_1 + 10);
	sort(array_2, array_2 + 10);
	merge(array_1, array_1 + 10, array_2, array_2 + 10, v.begin());

	cout << "Итоговый вектор: ";
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	return 0; 
}
