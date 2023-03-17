#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

    // Создание нейтрального указателя
	/*// Способ №1
	int* pn1 = 0;
	if (pn1 != 0)
		std::cout << *pn1 << std::endl;
	else
		std::cout << "Указатель не инициализирован. \n";
	// Способ №2
	int* pn2 = NULL;
		if (pn2 != NULL)
			std::cout << *pn2 << std::endl;
		else
			std::cout << "Указатель не инициализирован. \n";
	// Способ №3
		int* pn3 = nullptr;
		if (pn3 != nullptr)
			std::cout << *pn3 << std::endl;
		else
			std::cout << "Указатель не инициализирован. \n";*/

	// Модификации (виды) указателей
	n = 10; m = 20;
	// указатель на константу 
	const int* mp1;
	mp1 = &n;
	mp1 = &m;
	// *ьз1 = 30ж // ОШИБКА!!!
	std::cout << *mp1 << std::endl;

	// Указатель константа или константный указатель
	int* const mp2 = &n;
	// mp2 = &m; // Ошибка!!!
	*mp2 = 15;
	std::cout << *mp2 << std::endl;

	// констатный указатель на константу.
	const int* const mp3 = &n;
	// mp3 = &m; //ОШИБКА !!!
	// *mp3 = 25; // ОШИБКА !!!

	std::cout << *mp3 << std::endl;

	return 0;

}