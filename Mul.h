
#include "base.h"

class Mul: public base{
   base* right = NULL;
   base* left = NULL;
   public:
      double evaluate(){ return left.evaluate() * right.evaluate();}
      string stringify(){ return left.stringify() + "*" + right.stringify();}
}      
