#include "base.h"

class FiveOpMock: public Base {
   public:
      OpMock(){ };

      virtual double evaluate(){ return 5;}
      virtual string stringify(){ return "5";}
}
