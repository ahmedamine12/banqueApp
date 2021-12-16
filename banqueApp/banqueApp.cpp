// banqueApp.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Client.h"
#include "Compte.h"
#include "Devise.h"
#include"MAD.h"
#include"dolar.h"
#include"euro.h"
using namespace std;
using namespace Banque;
int main()
{
    Client *c1=new Client("user1", "user1", "adduser1");
    Client* c2 = new Client("user2", "user2", "adduser2");
    Devise* s1 = new Devise(20000);
    Devise* s2 = new Devise(1500);
    Devise* s3 = new Devise(20000);
    Compte *cpt1 = new Compte(c1, s1);
    Compte* cpt2 = new Compte(c2, s2);
    Compte cpt3(*cpt1);
    Compte cpt4(cpt3);
  //mpte* cpt2 = new Compte(c1, s3);
   /*cpt2->debiter(s2);
    cpt2->crediter(s3);
    cpt2->show_operations();
    cpt1->debiter(s2);
    cpt1->crediter(s3);
   cpt1->verser(s2, *cpt2);
    cpt1->consulter();
    //cpt1->consulter();
   //->consulter();
    cpt3 = *cpt2;*/
    Devise* d1 = new dolar(1000);
    Devise* d2 = new euro(500);
    Devise* d3 = new dolar(700);
    Compte* mec = new Compte(c2, d1);
    mec->crediter(d2);
    mec->debiter(d3);

    mec->show_operations();
    /*d1->afficher();
    euro* e1 = d1->ConvertirToEuro();
    e1->afficher();
    cpt1->crediter(s1);
    cpt1->consulter();
    */
    //cpt1->show_operations();

    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
