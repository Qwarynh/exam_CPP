#include "menu.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int menu::compteur=0;

int menu::select(){
/*compteur ++;
ifstream f_sauvegarde("sauvegarde.txt");  
	if(f_sauvegarde && compteur ==1){
	int i;

		f_sauvegarde.seekg (0, f_sauvegarde.end);
		int length = f_sauvegarde.tellg();
	    f_sauvegarde.seekg (0, f_sauvegarde.beg);

	    char * buffer = new char [length];
	    f_sauvegarde.read (buffer,length);

		for(i=0; i<length; i++){
		f_sauvegarde >> tab[i];
		cout << tab[i] << endl;
		}
	
	f_sauvegarde.close();

	}
*/

int test =0;

cout<< "Que voulez vous faire?" <<endl;
cout<< "1 : Ajouter un réel" <<endl;
cout<< "2 : Afficher la liste des réels" <<endl;
cout<< "3 : Supprimer le premier réel ayant une valeur donnée" <<endl;
cout<< "4 : Supprimer tous les réels ayant une valeur donnée" <<endl;
cout<< "5 : Quitter" <<endl;

cin >> test;

switch(test)
{
case 1: 
	add();
	break;

case 2:
	show();
	break;
case 3:
	delete_first();
	break;
case 4:
	delete_all();
	break;
case 5: 
	exit();
	return 0;

default : 
	cout<< "Erreur" <<endl; 
	select();

}
};

void menu::add(){
float ajout;
cout << "quel réel voulez vous ajouter?" <<endl;
	cin >> ajout;
	tab.push_back(ajout);
	sort(tab.begin(), tab.begin()+tab.size());
	cout << endl;
	select();
};

void menu::show(){
	cout<< endl;
	for (int i=0; i< tab.size(); i++){
		cout<< tab[i]<<endl;
		}
	select();
};

void menu::delete_first() {

float del;
cout << "quel réel voulez vous supprimer?" <<endl;
	cin >> del;

		for (int i=0; i< tab.size(); i++){
			if(tab[i] != del){
			continue;			
			} else{
			tab.erase(tab.begin()+i);
			break;
			}
		}
	select();

};

void menu::delete_all(){

	cout << "quel réel voulez vous supprimer?" <<endl;

	float del;
		cin >> del;
		for (int i=0; i< tab.size(); i++){
			if(tab[i] == del){
			tab.erase(tab.begin()+i);
			i--;
			}
		}
	select();

};

void menu::exit(){
	ofstream f_sauvegarde;
	f_sauvegarde.open("sauvegarde.txt");

	for (int i =0; i<tab.size(); i++){

	f_sauvegarde << tab[i] <<endl;

	}
	f_sauvegarde.close();
}
