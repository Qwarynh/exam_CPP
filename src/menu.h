/*! \file menu.h
* \brief fichier de la classe menu
* \author Paul
* \version 1.0
*/

#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
/*! \class menu
* \brief classe menu contenant plusieurs methodes pour afficher et éxécuter les options du menu.
*/

class menu
{
public:
/*! \brief methode selection, affiche le menu
*/
	int select();


/*! \brief methode add, ajoute un élément à la liste
*/
	void add();

/*! \brief methode show, montre la liste
*/
	void show();

/*! \brief methode delete_first, supprime le premier élément donné
*/
	void delete_first();

/*! \brief methode delete_all, supprime tous les éléments donnés
*/
	void delete_all();

/*! \brief methode delete_all, enregistre la liste dans un fichier txt et quitte l'application
*/
	void exit();

	vector <float> tab;
	static int compteur;
protected:

private:
};


