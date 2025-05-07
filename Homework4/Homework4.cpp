#include <iostream>
#include <locale>

//Створіть массив на 20 елементів:
//-вивести лише парні значення
//- вивести лише від'ємні значення
//- порахувати сумму усіх елементів
//- порахувати середнє значення елементів массиву
//- користувач вводить число, перевірте наявність числа в массиві :
//= якщо число існує, вивести індекс
//= інакше вивести повідомлення : "Числа не є частиною массива"
//- вивести максимальне та мінімальне значення массиву
//- заповнити массив числами Фібоначчі(кожне число сума двух попередніх, ряд чисел починається з нуля)
//- вивести масив в зворотньому порядку
//
//Завдання з зірочкою)):
//Користувач вводить індекс, та вводить нове число, підставити нове значення на вказаний індекс, при цьому нове значення має посунути існуючі.Наприклад
//Було : 1 2 3 4 5
//Користувач вводить 2 індекс та нове число 100
//Стало : 1 2 100 3 4 5

using namespace std; 
int main() {
	 setlocale(LC_ALL, "Russian"); 
	srand(time(NULL));
	const int SIZE = 20;
	//int arr[SIZE];

	//for (int i = 0; i < 20; i++) {
	//	int variabel = rand() % 1000 - 200;
	//	arr[i] = variabel;
	//}

	//std::cout << "//-вивести лише парные значення" << std::endl;
	//for (int i = 0; i < 20; i++) {
	//	if (arr[i] % 2 == 0) {
	//		std::cout << "parnoe :" << arr[i] << std::endl;
	//	}
	//}

	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "//- вивести лише від'ємні значення" << std::endl;
	//for (int i = 0; i < 20; i++) {
	//	if (arr[i] < 0 ) {
	//		std::cout << "0 < :" << arr[i] << std::endl;
	//	}
	//}

	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "//- порахувати сумму усіх елементів" << std::endl;
	//int result = 0;
	//for (int i = 0; i < 20; i++) {
	//	result += arr[i];
	//}
	//std::cout << "sum of all numbers :" << result << std::endl;

	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "//-  порахувати середнє значення елементів массиву" << std::endl;
	//result = 0;
	//int call = 0;
	//for (int i = 0; i < 20; i++) {
	//	result += arr[i];
	//	call += 1;
	//}
	//std::cout << "middl of  numbers :" << result/call << std::endl;
	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "- користувач вводить число, перевірте наявність числа в массиві:\n     - користувач вводить число, перевірте наявність числа в массиві:\n      = інакше вивести повідомлення: Числа не є частиною массива" << std::endl;	

	//while (true) {
	//	std::cout << "1 - print number and check exersise \n2 - end check exersise :";
	//	int chose;
	//	std::cin >> chose;
	//	if (chose == 2) {
	//		break;
	//	}
	//	else if (chose == 1) {
	//		std::cout << "1 print number :";
	//		std::cin >> chose;
	//		for (int i = 0; i < 20; i++) {
	//			if (chose == arr[i]) {
	//				std::cout << "arr has :" << chose << "on index" << arr[i]<<std::endl;
	//				break;
	//			}
	//		}
	//		std::cout << "arr dont have this namber" << std::endl;
	//		
	//	}
	//	else {
	//		break;
	//	}
	//}

	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;


	//std::cout << "//- вивести максимальне та мінімальне значення массиву"<<std::endl;
	//int max = 0;
	//int min = 0; 
	//for (int i = 0; i < 20; i++) {
	//	if (arr[i] > max) {
	//		max = arr[i];
	//	}
	//	if (arr[i] < min) {
	//		min = arr[i];
	//	}
	//}
	//std::cout << "max : " << max << std::endl;
	//std::cout << "min : " << min << std::endl;
	//
	//
	//
	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "//- заповнити массив числами Фібоначчі(кожне число сума двух попередніх, ряд чисел починається з нуля)" << std::endl;
	//int arr1[SIZE]={ 0,1 };
	//for (int i = 0; i < SIZE; i++) {
	//	arr1[i + 2] = arr1[i + 1] + arr1[i];
	//}

	//for (int i = 0; i < SIZE; i++) {
	//	std::cout << arr1[i] << std::endl;
	//}

	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "//- вивести масив в зворотньому порядку" << std::endl;
	//
	//int arr2[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	//for (int i = SIZE -1 ; i > 0; i--) {
	//	std::cout << arr2[i] << std::endl;
	//}



//Завдання з зірочкою)):
//Користувач вводить індекс, та вводить нове число, підставити нове значення на вказаний індекс, при цьому нове значення має посунути існуючі.Наприклад
//Було : 1 2 3 4 5
//Користувач вводить 2 індекс та нове число 100
//Стало : 1 2 100 3 4 5

	const int maxSize = 100;
	int arr[maxSize] = { 1, 2, 3, 4, 5 };
	int size = 5;

	int index, newValue;

	cout << "Current array: " << std::endl;
	for (int i = 0; i < size; i++) {
	    cout << arr[i] << " ";
	}

	cout << "Enter index: ";
	cin >> index;

	cout << "Enter new number: ";
	cin >> newValue;

	for (int i = size; i > index; i--) {
	    arr[i] = arr[i - 1];
	}

	arr[index] = newValue;
	size++;

	cout << "New array: ";
	for (int i = 0; i < size; i++) {
	    cout << arr[i] << " ";
	}


}