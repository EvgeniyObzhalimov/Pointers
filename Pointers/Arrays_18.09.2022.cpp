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
	//указатели на переменные
	/*std::cout << "адрес n= " << &n << "\n";
	int * pn;//объ€вл€ем ук. pn
	pn = &n;//направл€ем указатель на переменную n
	std::cout << "pn =    " << pn<<"\n";//выводим значение pn
	std::cout << "n = " << n << "\n";
	std::cout << "*pn = " << *pn << "\n";//использу€ разыменование выводим n
	*pn = 20;//использу€ разыменование мен€ем значение n
	std::cout << "нова€ n = " << n << "\n";

	pn = &m;//перенаправл€ем указатель на адрес m

	std::cout << "адрес m = " << &m << "\n";
	std::cout << "    pn=   " << pn << "\n";
	int* pm = &m;//создаем еще один указатель и направл€ем его на m
	std::cout << "   pm = " << pm << "\n";*/
//” ј«ј“≈Ћ» Ќј ћј——»¬џ
	/*int mass[5]{2,4,5,6,8};

	int* pm2 = &mass[2];
	std::cout << *pm2 << "\n";
	pm2++;
	std::cout << *pm2 << "\n";//сдвинули указатель на 1 €чейку вправо
	std::cout << mass << "\n";// адрес 1 элемента массива
	pm2 = mass;
	std::cout << *pm2 << "\n";
	std::cout << "массив:\n";
	for (int i = 0; i < 5; i++)
		//std::cout << mass[i] << ", ";//классический вывод массива
		std::cout << *(pm2 + i) << ", ";//разыменование эл-та массива от которого мы сделали i шагов вперед
	std::cout << "\b\b.\n";
	//mass=&n; - ошибка, т.к. названи€ массивов нельз€ перенаправл€ть на другие области пам€ти.
	*/

	//«јƒј„ј - —ќ«ƒј“№ ‘-ё ћ≈Ќяёў”ё «Ќј„≈Ќ»я 2-’ ѕ≈–≈ћ≈ЌЌџ’  ћ≈—“јћ»

	/*std::cout << n << "  " << m << "\n";
	//my_swap(n, m);*///не работает, т.к. параметры - это копии
	/*pswap(&n, &m)*/;//неудобно, т.к. передаем адреса
	refswap(n, m);
	std::cout << n << "  " << m << "\n";


	/*int* pn = &n;
	std::cout << "*pn = " << *pn << "\n";//разыменование не удобно!!

	int & refn= n;
	std::cout <<"refn = "<< refn << "\n";//* - указвать не нужно - это приведет к ошибке

	refn = 20;//измен€ем переменную черезз ссылку
	std::cout << "new n = " << n << "\n";*/ // ссылки на переменные



return 0;


}


