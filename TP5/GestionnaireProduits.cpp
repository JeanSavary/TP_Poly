/********************************************
 * Titre: Travail pratique #5 - GestionnaireProduits.cpp
 * Date: 9 mars 2018
 * Auteur: Ryan Hardie
 *******************************************/

#include "GestionnaireProduits.h"


GestionnaireProduits::GestionnaireProduits()
{
    multimap<int,Produit*> conteneur_ ;
}

void GestionnaireProduits::reinitialiserClient()
{
    for (multimap<int,Produit*>::iterator it= conteneur_.begin() ; it !=conteneur_.end(); it++) {
        ProduitAuxEncheres *produit = dynamic_cast<ProduitAuxEncheres *>(it->second);
        if (produit) {
            produit->modifierEncherisseur(nullptr);
            produit->modifierPrix(produit->obtenirPrixInitial());
        }
        conteneur_.clear();
    }
    
}

void GestionnaireProduits::reinitialiserFournisseur()
{}

void GestionnaireProduits::afficher() const
{}

double GestionnaireProduits::obtenirTotalAPayer() const
{}

double GestionnaireProduits::obtenirTotalAPayerPremium() const
{}

