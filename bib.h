#ifndef BIB_H_INCLUDED
#define BIB_H_INCLUDED
class commande
{
protected :
    int numCommande ;
    date dateCommande;
<<<<<<< HEAD
    int qte;
=======
    float total ;
>>>>>>> c1ede030fed757e67ea4ccaa0ecb02338509f3c2
    vector<medicament*> tab ;
public :
      commande(int=0 );
      commande(const commande &);
      void setNumCo(int a){numCommande=a ;}
      int getNumCo(){return numCommande;}
<<<<<<< HEAD
      void ajouterCommande();///doit etre une fonction amie à la classe medicament et on doit ajouter la la fonction rechercheMed à la classe med
      float calculerTotal() ;
      //void consulterCommande(medicament&) ;
=======
      void ajouterCommande(medicament&);
      float calculerTotal(medicament& ) ;
      void consulterMedicament(medicament&) ;
>>>>>>> c1ede030fed757e67ea4ccaa0ecb02338509f3c2
      void afficherCommande() ;
      void annulerMedicament(medicament) ;


      ~commande(void) ;
     };

     class achat
     {
<<<<<<< HEAD
         medicament medAchat ;
         int qte ;
         vector<medicament*> tab1;
         date dateAchat ;
     public :
         achat(medicament ,  int=0) ;
         achat(const &)
         void saisirAchat() ;
         float calculachat();
         float rechercherPA() ;
         //void afficheAchat() ;
         friend operator& operator<<(ostream& , achat const & ) ;
          friend operator& operator>>(istream& , achat const & );
=======
         string nomCommercial;
         float prixAchat ;
         int qte ;
         vector<medicament *> ;
         date dateAchat ;
     public :
         achat(string=0 , float=0.0 , int=0 , date ) ;
         void saisirAchat() ;
         float calculachat();
         void afficheAchat() ;
>>>>>>> c1ede030fed757e67ea4ccaa0ecb02338509f3c2
         ~achat(void);


     };
<<<<<<< HEAD
      ostream& operator<<(ostream& out , achat const & a)
      {   for (int i=0 ; i<a.tab1.size();i++)
      {
          out<<a.medAchat <<endl;

      }
      return out ;

      }
      istream& operator<<(istream& in , achat const & a)
      {   for (int i=0 ; i<a.tab1.size();i++)
      {
          in<<a.medAchat <<endl;

      }
      return in ;

      }
=======
     class medicament
     {
         string nomChimique ;
         string nomCommercial ;

     public :
         medicament(string , string ) ;

         friend ostream& operator<<(ostream& , medicament&) ;
         friend istream& operator>>(istream& , medicament& );
         friend float calculerTotal(medicament& );
     };



>>>>>>> c1ede030fed757e67ea4ccaa0ecb02338509f3c2

#endif // BIB_H_INCLUDED
