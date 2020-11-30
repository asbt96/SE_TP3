//ZooAnimal #1
//(Part 3):
#include <iostream>
  class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal(char *, int, int, int); // Create Function
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }

   void ZooAnimal::Destroy ()
   {
    delete [] name;
   }

   // ========== an application to use the ZooAnimal class
   int main ()
   {
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    std::cout << "This animal's name is " << bozo.reptName() << '\n';

    bozo.Destroy ();
    return 0;
   }
