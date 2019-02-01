class FiveOpMock: public Base {
   public:
      FiveOpMock(){ };

      virtual double evaluate(){ return 5;}
      virtual string stringify(){ return "5";}
};
