// Main-with-p.cpp (This is the client file that uses the objects)

#include <iostream>
#include <string>
#include "wiz-shows-privates.h"

// NOTE: This shouldn't compile now because the data members are private
// are we not allowed to access them in this code...

int main (void)
{
  // Instantiate an instance of the wizard class

  Wizard wiz0;

  // Set the magic points to something .. 

  wiz0.setMagicPoints(2);

  // See if we can cast a spell...I don't think
  // we have enough points to be fair. 

  wiz0.castSpell();

  wiz0.talk();

  wiz0.fight();

  std::cout << "You have successfully used the wizard class\n" << std::ends;

  wiz0.setMagicPoints(40);

  wiz0.castSpell();
}



