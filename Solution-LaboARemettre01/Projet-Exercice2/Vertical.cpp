/* But: Écrire  un programme qui prend comme entrée un nombre de cinq chiffres. Le programme vérifie qu'il y a bien
5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la première ligne, le
deuxième chiffre sur la deuxième ligne, ainsi de suite.*/
// Auteur: Samuel Allaire
// Date: 2020-09-12

#include <iostream> // Pour communiquer avec l'utilisateur 

int main() // La porte d'entrer pour le programme
{
	setlocale(LC_ALL, "");  // Pour afficher correctement les accents dans la console

    // Déclaration des variables
	int nombre5chiffres;

	// Le programme doit afficher un message pour inviter l'utilisateur à entre un nombre entier à 5 chiffres
	std::cout << "Veuillez entrer un nombre entier à 5 chiffres : ";
	// Le programme doit lire le nombre qui à été tapé au clavier
	std::cin >> nombre5chiffres;

	// Le programme lit le chiffre entier et détermine si le nombre contient 5 chiffres
	if ((nombre5chiffres >= 10000 && nombre5chiffres <= 99999) or (nombre5chiffres <= -10000 && nombre5chiffres >= -99999))
	{
		// Le programme doit afficher afficher le nombre verticalement
		std::cout << nombre5chiffres / 10000 % 10 << "\n" << nombre5chiffres / 1000 % 10 << "\n" << nombre5chiffres / 100 % 10 << "\n" << nombre5chiffres / 10 % 10 << "\n" << nombre5chiffres % 10;
	}
	else
	{
		// Le programme doit afficher un message qui indique que le nombre n'a pas 5 chiffres
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}
}

// Plan de tests
/*
Nombre                        résultat escompté
17                            Ce nombre ne contient pas 5 chiffres.
4231                          Ce nombre ne contient pas 5 chiffres.
-82134                        -82134 est affiché ligne par ligne
-4                            Ce nombre ne contient pas 5 chiffres.
12345                         12345 est affiché ligne par ligne
*/