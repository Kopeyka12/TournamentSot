#include "pch.h"
#include "../TournamentSot/Tournament.h"
//@author Мирошин В.И.
// Тест функуии описаной в Tournament.h

// тестирование функции турнирной сортировки
TEST(TestSort, TestTournamentSort) {

	//Создаем массив из 2-х элементов
	int arr[] = { 1, 12 };
	int n = 2;

	tournamentSort(arr, n);
	vector<int> v = { 1, 12 };
	vector<int> v1;
	for (int i = 0; i < n; i++) {
		v1.push_back(arr[i]);
	}

	assert(v==v1);
	v.clear(); v1.clear();

	//Создаем массив из 1-го элементов
	int arr1[] = { -2 };
	n = 1;

	tournamentSort(arr1, n);
	v = { -2 };
	for (int i = 0; i < n; i++) {
		v1.push_back(arr1[i]);
	}

	assert(v==v1);
	v.clear(); v1.clear();

	//Пустой массив
	int* arr2 = nullptr;
	n = 0;

	tournamentSort(arr2, n);
	assert(arr2==nullptr);
	v = { };
	for (int i = 0; i < n; i++) {
		v1.push_back(arr2[i]);
	}

	assert(v==v1);
	v.clear(); v1.clear();

	// Массив с значением max_int и min_int
	int arr3[] = { 7, 38, 89, INT_MAX, 165, 56, -2, INT_MIN, -31, 648, 5125, 5126 };
	n = 12;

	tournamentSort(arr3, n);
	v = { INT_MIN, -31, -2, 7, 38, 56, 89, 165,  648, 5125, 5126, INT_MAX };
	for (int i = 0; i < n; i++) {
		v1.push_back(arr3[i]);
	}

	assert(v==v1);
	v.clear(); v1.clear();

}
