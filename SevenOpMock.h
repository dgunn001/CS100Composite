#include "base.h"

class SevenOpMock: public Base {
   public:
      OpMock(){ };

      virtual double evauate(){ return 7.5;}
      virtual string stringify(){ return "7.5";}
}
