#include <iostream>
#include <locale.h>
using namespace std;
string b = "si";
int main() {
	setlocale(LC_CTYPE, "Spanish");
	do {
		cout << "\nBiografia de Kevin Medrano\n\n";
		cout << "Nació el 22 de agosto del año 1997 en Sucre, \nfamilia: Mamá, sus abuelos y hermana\n" <<
			"Estudió en la primaria Eduardo Avaroa, \nsecuandaria en el colegio Roberto Alvarado\n" <<
			"En la actualidad estudia en la univeridad USFX \nen la carrera de Ing de Sistemas\n" << endl;

		cout << "QUIERE VOLVER A VER LA BIOGRAFÍA?    ";
		cin >> b;

	} while (b == "si");

	return 0;
}