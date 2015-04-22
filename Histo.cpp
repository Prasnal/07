/*#include "Histo.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

void Histo::print() {
  int i=0;
  for(i=0; i<wartownik; i++){
    printf("tab[%d]: %f \n ", i, tab[i]);
  }
}

void Histo::norm() {
  std::cout << "Normalizacja\n";
}

void Histo::add(float liczba) {
  int szerokosc = rangeEnd - rangeStart;
  std::cout << "szer: " << szerokosc << "\n";

  if (liczba < rangeStart) {
    tab[0]++;
  }
  else if (liczba > rangeEnd) {
    tab[wartownik-1]++;
  }
  else {
    // int kubelek=szerokosc/nbBins;
    int index=ceil(((liczba-rangeStart)/szerokosc)*nbBins);
    std::cout << "Liczba: " << liczba << "(liczba-rangeStart) " << (liczba-rangeStart)
              << "((liczba-rangeStart)/szerokosc) " << ((liczba-rangeStart)/szerokosc) 
              << " Index: " << index << "\n";
    tab[index]++;
  }
}

Histo::Histo(const Histo& zmienna ){
  wartownik=zmienna.wartownik;
  rangeStart=zmienna.rangeStart;
  rangeEnd = zmienna.rangeEnd;
  nbBins = zmienna.nbBins;
  name=zmienna.name;
  int k=0;
  for(k=0; k<wartownik; k++){
    tab[k]=zmienna.tab[k];
  }
}
Histo::Histo(std::string napis, int costam, float costam2, float costam3) {
  wartownik = 6;  
  for (int j=0; j < wartownik; j++) {
    tab[j]=0;
  }
  name=napis;
  nbBins=costam;
  rangeStart=costam2;
  rangeEnd=costam3;
                
  std::cout<<"name: " << name <<"\n nbBins: " << nbBins<< "\n range: [ " << rangeStart <<" ; " << rangeEnd<<"] \n" ;

}
Histo::~Histo() {
  std::cout<<"destructor \n";
}

Histo::Histo() {
  wartownik = 10;
  rangeStart = 0;
  rangeEnd = 10;
  nbBins = 10;
  for(int j=0; j<wartownik; j++) {
    tab[j]=0;
  }
  printf("Histo:: default \n");
}

*/


#include "Histo.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>

void Histo::print() {
  int i=0;
  for(i=0; i<wartownik; i++){
    printf("tab[%d]: %f \n ", i, tab[i]);
  }
}

void Histo::norm() {
  std::cout << "\nNormalizacja\n";
}

void Histo::add(float liczba) {
  int szerokosc = rangeEnd - rangeStart;
  std::cout << "szer: " << szerokosc << "\n";

  if (liczba < rangeStart) {
    tab[0]++;
  }
  else if (liczba > rangeEnd) {
    tab[wartownik-1]++;
  }
  else {
    // int kubelek=szerokosc/nbBins;
    int index=ceil(((liczba-rangeStart)/szerokosc)*nbBins);
    #if defined(DEBUG)
    std::cout << "Liczba: " << liczba << "(liczba-rangeStart) " << (liczba-rangeStart)
              << "((liczba-rangeStart)/szerokosc) " << ((liczba-rangeStart)/szerokosc) 
              << " Index: " << index << "\n";
    #endif
    tab[index]++;
  }
}

Histo::Histo(const Histo& zmienna ){
  std::cout << "\nCopy Constructor\n";
  wartownik = zmienna.wartownik;  
  name=zmienna.name;
  nbBins=zmienna.nbBins;
  rangeStart=zmienna.rangeStart;
  rangeEnd=zmienna.rangeEnd;
  for (int j=0; j < wartownik; j++) {
    tab[j]=zmienna.tab[j];
  }      
 
}
Histo::Histo(std::string napis, int costam, float costam2, float costam3) {
  wartownik = 6;  
  for (int j=0; j < wartownik; j++) {
    tab[j]=0;
  }
  name=napis;
  nbBins=costam;
  rangeStart=costam2;
  rangeEnd=costam3;
                
  std::cout<<"name: " << name <<"\n nbBins: " << nbBins<< "\n range: [ " << rangeStart <<" ; " << rangeEnd<<"] \n" ;

}
Histo::~Histo() {
  std::cout<<"destructor\n";
}

Histo::Histo() {
  wartownik = 12;
  rangeStart = 0;
  rangeEnd = 10;
  nbBins = 10;
  for(int j=0; j<wartownik; j++) {
    tab[j]=0;
  }
  printf("Histo:: default \n");
}
