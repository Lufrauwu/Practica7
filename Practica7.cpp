// Practica7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	int uwu = 0;
  cout << "Hola, voy adivinar el cereal en el que estas pensando\n";
	cout << "Tu cereal esta hecho en ojuelas?\n1.si\n2.no"<<endl;
		cin >> uwu;
		switch (uwu)
		{
		case 1: cout << "Tu cereal tiene glaseado de azucar?\n1.si\n2.no"<<endl;
			cin >> uwu;
			switch (uwu)
			{
			case 1: cout << "Tu cereal es zucaritas RIP tigre toño";
				break;
			case 2: cout << "tu cereal es corn flakes";
				break;

		
			default: cout << "ora eso no es ni 1 ni 2";
				break;
			}
			break;

		case 2: 
			cout << "Tu cereal es de chocolate?\n1.si\n2.no"<<endl;
			cin >> uwu;
			switch (uwu)
			{
			case 1:
				cout << "Tu cereal es de arroz?\n1.si\2.no" << endl;
				cin >> uwu;
				switch (uwu)
				{
				case 1:
					cout << "Tu cereal es chocokrispis" << endl;
					break;
				case 2:
					cout << "tu cereal es nesquik" << endl;
					break;
				default: cout << "ora eso no es ni 1 ni 2";
					break;
				}
				break;
			case 2:
				cout << "tu cereal tiene sabor a frutas?\n1.si\n2.no" << endl;
				cin >> uwu;
				switch (uwu)
				{case 1:
					cout << "Tu cereal tiene forma de aros?\n1.si\n2.no" << endl;
					cin >> uwu;
					switch (uwu)
					{case 1:
						cout << "Tu cereal es froot loops" << endl;
						break;
					case 2: 
						cout << "tu cereal es Trix" << endl;
						break;

					default: 
						cout << "ora eso no es ni 1 ni 2";
						break;
					}
					break;
				case 2:
					cout << "tu cereal es de bolitas de maiz?\n1.si\n2.no" << endl;
					cin >> uwu;
					switch (uwu)
					{case 1:
						cout << "Tu cereal es corn pops" << endl;
						break;
					case 2:
						cout << "No master, no esta dentro de mis conocimientos" << endl;
						break;
					default: 
						cout << "ora eso no es ni 1 ni 2";
						break;
					}
				default:
					cout << "ora eso no es ni 1 ni 2";
					break;
				}
			default: 
				cout << "ora eso no es ni 1 ni 2";
				break;
			}
			break;

		
		default:
			cout << "ora eso no es ni 1 ni 2";
			break;
		}
}

