// Usuario de Acepta el reto: jjjjjjjp022
#include <iostream>
#include <stack>

bool resuelveCaso() {
	// leer los datos de la entrada
	char tmp;
	std::cin.get(tmp);

	if (!std::cin)
		return false;
	
	std::stack<char> pila;
	bool funciona = true;

	while (funciona && tmp != '\n')
	{
		//Evaluar
		if (tmp == '(' || tmp == '[' || tmp == '{')
			pila.push(tmp);
		else if (pila.size() > 0 && ( (tmp == ')' && pila.top() == '(') || (tmp == '}' && pila.top() == '{') || (tmp == ']' && pila.top() == '[') ) )
			pila.pop();
		else if (tmp == ')' || tmp == ']' || tmp == '}')
			funciona = false;

		std::cin.get(tmp);
	}

	while (tmp != '\n')
		std::cin.get(tmp);
	
	// escribir sol
	if (funciona && pila.size() == 0)
		std::cout << "YES\n";
	else
		std::cout << "NO\n";

	return true;
}
int main()
{
  while(resuelveCaso());
}