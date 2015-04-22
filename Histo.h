#ifndef Histo_h
#define Histo_h
#include <string>

class Histo{
public:
  float tab[];
  void print();
  void norm();
  void add(float liczba);
  Histo(const Histo& zmienna );
  Histo(const Histo& zmienna, std::string napis, int costam, float costam2, float costam3);
  ~Histo();
  Histo();


};







#endif
