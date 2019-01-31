#include "base.h"

class RandMock: public Base {
   public:
      RandMock() {};
      
      virtual double evaluate() {return 6.9;}
      virtual string stringify() {return "6.9";}
} 
