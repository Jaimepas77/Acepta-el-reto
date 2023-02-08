// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <list>

// función que resuelve el problema
std::list<char> resolver(std::string ramiro) {
	// - Inicio
	// + Fin
	// * Derecha
	// 3 Supr

	//Usar iteradores
	std::list<char> teclado;
	auto it = teclado.begin();

	for (const char& l : ramiro)
	{
		switch (l)
		{
		case '-': it = teclado.begin();
			break;
		case '+':
			it = teclado.end();
			break;
		case '*': {
			if (teclado.end() != it)
				++it;
		}
				break;
		case '3': {
			if (teclado.end() != it)
				it = teclado.erase(it);
		}
				break;
		default: teclado.insert(it, l);
		}
	}

	return teclado;
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {
	// leer los datos de la entrad
	std::string ramiro;
	std::getline(std::cin, ramiro);

	if (!std::cin)
		return false;

	std::list<char> teclado = resolver(ramiro);

	// escribir sol
	for (const char& l : teclado)
		std::cout << l;
	std::cout << '\n';

	return true;

}

int main() {
	while (resuelveCaso())
		;
	return 0;
}