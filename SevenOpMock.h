#include <iostream>

using namespace std;

class SevenOpMock: public Base {
   private:
   int num;
   public:
      SevenOpMock():num(0){ }

      virtual double evaluate(){ return 7.5;}
      virtual string stringify(){ return "7.5";}
};
