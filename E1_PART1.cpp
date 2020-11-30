
//ZooAnimal #1
//(Part 1):
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
