#include <iostream>
#include <string>
#include <sstream>

using namespace std;
struct Peliculas {
	string titulo;
	int a�o;
}mipelicula, supelicula;
void imprimirPelicula(Peliculas pelicula);
int main() {
	string mistr;
	mipelicula.titulo = "TARZAN";
	mipelicula.a�o = 2020;

	cout << "===*==*\tIngrese el titulo\n===*==*";
	getline(cin, supelicula.titulo);
	cout << "===*==*\tIngrese  el a�o\n===*==*";

	getline(cin, mistr);
	stringstream(mistr) >> supelicula.a�o;
	imprimirPelicula(mipelicula);
	imprimirPelicula(supelicula);
	system("pause");
	return 0;
}
void imprimirPelicula(Peliculas pelicula) {
	cout << pelicula.titulo;
	cout << pelicula.a�o << endl;
}