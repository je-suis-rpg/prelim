// Wiz-with-p.h (Wizard Header File)

// These header files just contain declarations for
// classes and library functions. Implementations belong in
// cpp files. Ideally of same name. 

#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>


class Wizard
{
public:
  //Methods
  void fight();
  void talk();
  void castSpell();
  
  //Data members
  //Experimenting with making these members 
  //private
  
private:

  std::string mName;
  int mHitPoints;
  int mMagicPoints;
  int mArmour;
};


#endif // WIZARD_H

