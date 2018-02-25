#include <iostream>

int main( void ){
	int m, n;
	
	std::cout << "Somando de m a (m+n):\n";


	// Enquanto houver leitura para processar vamos somar...
	while ( std::cin >> m >> n){

		auto acc(0); // acumulador a soma da serie solicitada.
		
		for (auto a(0); a<n; ++a){
			acc = acc + a + m;
			std::cout << acc << ", ";

		}
		std::cout << acc;
	}
	std::cout << "Fim!";
	return 0;
}
