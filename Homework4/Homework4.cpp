#include <iostream>
#include <locale>

//������� ������ �� 20 ��������:
//-������� ���� ���� ��������
//- ������� ���� ��'��� ��������
//- ���������� ����� ��� ��������
//- ���������� ������ �������� �������� �������
//- ���������� ������� �����, �������� �������� ����� � ������ :
//= ���� ����� ����, ������� ������
//= ������ ������� ����������� : "����� �� � �������� �������"
//- ������� ����������� �� �������� �������� �������
//- ��������� ������ ������� Գ�������(����� ����� ���� ���� ���������, ��� ����� ���������� � ����)
//- ������� ����� � ����������� �������
//
//�������� � �������)):
//���������� ������� ������, �� ������� ���� �����, ��������� ���� �������� �� �������� ������, ��� ����� ���� �������� �� �������� �������.���������
//���� : 1 2 3 4 5
//���������� ������� 2 ������ �� ���� ����� 100
//����� : 1 2 100 3 4 5

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

	//std::cout << "//-������� ���� ������ ��������" << std::endl;
	//for (int i = 0; i < 20; i++) {
	//	if (arr[i] % 2 == 0) {
	//		std::cout << "parnoe :" << arr[i] << std::endl;
	//	}
	//}

	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "//- ������� ���� ��'��� ��������" << std::endl;
	//for (int i = 0; i < 20; i++) {
	//	if (arr[i] < 0 ) {
	//		std::cout << "0 < :" << arr[i] << std::endl;
	//	}
	//}

	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "//- ���������� ����� ��� ��������" << std::endl;
	//int result = 0;
	//for (int i = 0; i < 20; i++) {
	//	result += arr[i];
	//}
	//std::cout << "sum of all numbers :" << result << std::endl;

	//std::cout << endl;
	//std::cout << endl;
	//std::cout << endl;

	//std::cout << "//-  ���������� ������ �������� �������� �������" << std::endl;
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

	//std::cout << "- ���������� ������� �����, �������� �������� ����� � ������:\n     - ���������� ������� �����, �������� �������� ����� � ������:\n      = ������ ������� �����������: ����� �� � �������� �������" << std::endl;	

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


	//std::cout << "//- ������� ����������� �� �������� �������� �������"<<std::endl;
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

	//std::cout << "//- ��������� ������ ������� Գ�������(����� ����� ���� ���� ���������, ��� ����� ���������� � ����)" << std::endl;
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

	//std::cout << "//- ������� ����� � ����������� �������" << std::endl;
	//
	//int arr2[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	//for (int i = SIZE -1 ; i > 0; i--) {
	//	std::cout << arr2[i] << std::endl;
	//}



//�������� � �������)):
//���������� ������� ������, �� ������� ���� �����, ��������� ���� �������� �� �������� ������, ��� ����� ���� �������� �� �������� �������.���������
//���� : 1 2 3 4 5
//���������� ������� 2 ������ �� ���� ����� 100
//����� : 1 2 100 3 4 5

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