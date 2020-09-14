// But: Écrire un programme qui lit un entier et qui détermine et affiche s’il s’agit d’un entier pair d’un entier impair.
// Auteur: Samuel Allaire
// Date: 2020-09-12

#include <iostream> // Pour communiquer avec l'utilisateur 

int main() // La porte d'entrer pour le programme
{
	setlocale(LC_ALL, "");  // Pour afficher correctement les accents dans la console

	// Déclaration de la variable
	int nombre1;

	// Le programme doit afficher un message pour inviter l'utilisateur à entre un nombre entier
	std::cout << "Veuillez entrer un nombre entier : ";
	// Le programme doit lire le nombre qui à été tapé au clavier
	std::cin >> nombre1;

	// Le programme lit le chiffre entier et détermine si le chiffre est pair ou impair.
	if (nombre1 % 2 == 0)
	{
		std::cout << nombre1 << " est pair : "; // Le programme doit afficher un message qui indique que le chiffre est pair
	}
	else
	{
		std::cout << nombre1 << " est impair :"; // Le programme doit afficher un message qui indique que le chiffre est impair
	}
}

// Plan de tests
/*
nombre 1                      résultat escompté
17                            15 est impair
10                            10 est pair
-8                            -1 est impair
-4                            -2 est pair
2146236723423                 2146236723423 est impair
*/