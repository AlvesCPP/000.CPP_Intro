#include <iostream>
#include <stdlib.h>
#include <string>


int main()
{
	int nInteger = 0;
	double dblDouble = 0.0f;
	char cChar = 'a';
	bool blnBoolean = 1;

	std::string strString = "Bob";

	//Output
	std::cout << "Hellow world!" << std::endl;

	//Input
	std::cin >> nInteger;

	//Output
	std::cout << "Valeur de l'entier : " << nInteger << std::endl;
	std::cout << strString << std::endl;

	std::cout << "Entrez votre prenom" << std::endl;
	std::getline(std::cin, strString);
	std::cout << "Prenom : " << strString << std::endl;

	system("pause");

	return 0;
}