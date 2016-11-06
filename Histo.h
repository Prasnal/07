#ifndef Histo_h
#define Histo_h
#include <string>
#include <math.h>
#define SIZE 100

class Histo{
public:
  int tab[SIZE];
  int  wartownik;
  std::string name;
  int  nbBins;
  float  rangeStart;
  float  rangeEnd;
  void print();
  void norm();
  void add(float liczba);
  Histo(const Histo& zmienna );
  Histo(std::string napis, int costam, float costam2, float costam3);
  Histo();
  ~Histo();

};

#endif
