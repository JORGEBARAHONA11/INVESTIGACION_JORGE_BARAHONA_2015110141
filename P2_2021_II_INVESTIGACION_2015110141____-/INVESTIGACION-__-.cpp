#include <iostream>
#include <string>
#include <sstream>

using namespace std;
struct Peliculas {
	string titulo;
	int año;
}mipelicula, supelicula;
void imprimirPelicula(Peliculas pelicula);
int main() {
	string mistr;
	mipelicula.titulo = "TARZAN";
	mipelicula.año = 2020;

	cout << "===*==*\tIngrese el titulo\n===*==*";
	getline(cin, supelicula.titulo);
	cout << "===*==*\tIngrese  el año\n===*==*";

	getline(cin, mistr);
	stringstream(mistr) >> supelicula.año;
	imprimirPelicula(mipelicula);
	imprimirPelicula(supelicula);
	system("pause");
	return 0;
}
void imprimirPelicula(Peliculas pelicula) {
	cout << pelicula.titulo;
	cout << pelicula.año << endl;
}