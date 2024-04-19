#include <locale>
#include <iostream>
//1 – Peça para o usuário digitar um número de 1 a 7, e mostre o dia da semana correspondente, por exemplo, se o usuário digitar 1, mostre Domingo. Se o usuário digitar 2, mostre Segunda-Feira, e assim por diante. Caso o usuário digite algum outro número mostre dia invalido.


//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "pt_BR.UTF-8");
//
//	cout << "Descubra o dia da semana";
//
//	int num;
//	cout << "Digite um número de 1 a 7: ";
//	cin >> num;
//
//	switch (num)
//	{
//	case 1:
//		cout << "Domingo";
//		break;
//	case 2:
//		cout << "Segunda-Feira";
//		break;
//	case 3: 
//		cout << "Terça-Feira";
//		break;
//	case 4:
//		cout << "Quarta-Feira";
//	case 5: 
//		cout << "Quinta-feira";
//		break;
//	case 6: 
//		cout << "Sexta-Feira";
//		break;
//	case 7:
//		cout << "Sabadó";
//		break;
//	default:
//		cout << "Dia inválido";
//		break;
//	}
//
// return 0;
//}

//2 – Peça para o usuário informar dois números e a operação matemática que ele deseja(+, -, *ou / ), mostre o resultado da conta de acordo com a operação que ele escolheu


using namespace std;

int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int num1;
	cout << "Digite um número: ";
	cin >> num1;

	int num2;
	cout << "Digite um número: ";
	cin >> num2;

	char simbolo;
	cout << "Que operação você deseja fazer: ";
	cin >> simbolo;


		switch (simbolo)
	{
	case '+':
		cout << "A conta deu ";
		cout << num1 + num2;
		break;
	case '-':
		cout << "A conta deu ";
		cout << num1 - num2;
		break;
	case '*':
		cout << "A conta deu ";
		cout << num1 * num2;
		break;
	case '/':
		cout << "A conta deu ";
		cout << num1 / num2;
		break;

	default:
		cout << "Símbolo inválido";
		break;
	}


	return 0;
}


