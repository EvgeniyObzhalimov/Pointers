#include<iostream>

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
	void pswap(int* pn1, int* pn2) {
		int tmp = *pn1;
		*pn1 = *pn2;
		*pn2 = tmp;

	}
	void refswap(int &refn1, int &refn2) {
		int tmp = refn1;
		refn1 = refn2;
		refn2 = tmp;

	}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10,m=15;
	//��������� �� ����������
	/*std::cout << "����� n= " << &n << "\n";
	int * pn;//��������� ��. pn
	pn = &n;//���������� ��������� �� ���������� n
	std::cout << "pn =    " << pn<<"\n";//������� �������� pn
	std::cout << "n = " << n << "\n";
	std::cout << "*pn = " << *pn << "\n";//��������� ������������� ������� n
	*pn = 20;//��������� ������������� ������ �������� n
	std::cout << "����� n = " << n << "\n";

	pn = &m;//�������������� ��������� �� ����� m

	std::cout << "����� m = " << &m << "\n";
	std::cout << "    pn=   " << pn << "\n";
	int* pm = &m;//������� ��� ���� ��������� � ���������� ��� �� m
	std::cout << "   pm = " << pm << "\n";*/
//��������� �� �������
	/*int mass[5]{2,4,5,6,8};

	int* pm2 = &mass[2];
	std::cout << *pm2 << "\n";
	pm2++;
	std::cout << *pm2 << "\n";//�������� ��������� �� 1 ������ ������
	std::cout << mass << "\n";// ����� 1 �������� �������
	pm2 = mass;
	std::cout << *pm2 << "\n";
	std::cout << "������:\n";
	for (int i = 0; i < 5; i++)
		//std::cout << mass[i] << ", ";//������������ ����� �������
		std::cout << *(pm2 + i) << ", ";//������������� ��-�� ������� �� �������� �� ������� i ����� ������
	std::cout << "\b\b.\n";
	//mass=&n; - ������, �.�. �������� �������� ������ �������������� �� ������ ������� ������.
	*/

	//������ - ������� �-� �������� �������� 2-� ����������  �������

	/*std::cout << n << "  " << m << "\n";
	//my_swap(n, m);*///�� ��������, �.�. ��������� - ��� �����
	/*pswap(&n, &m)*/;//��������, �.�. �������� ������
	refswap(n, m);
	std::cout << n << "  " << m << "\n";


	/*int* pn = &n;
	std::cout << "*pn = " << *pn << "\n";//������������� �� ������!!

	int & refn= n;
	std::cout <<"refn = "<< refn << "\n";//* - �������� �� ����� - ��� �������� � ������

	refn = 20;//�������� ���������� ������ ������
	std::cout << "new n = " << n << "\n";*/ // ������ �� ����������



return 0;


}


