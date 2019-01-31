#include "base.h"

class Op: public base{
    Op(double num){};
    public:
      double evaluate(){ return num;}
      string stringify(){ return to_string(num);}
}
