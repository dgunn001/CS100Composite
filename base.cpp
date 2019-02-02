
#include <iostream>
#include <string>

using namespace std;

class Base {
    public:
        /* Constructors */
        Base() { };

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual string stringify() = 0;
};

class Op : public Base {
    protected:
        double number;
    public:
        Op(): number(0) {}
        Op(double a): number(a) {}
        double evaluate(){
            return number;
        }
     string stringify(){
         return to_string(number);
     }
};

class Rand : public Base {
    protected:
        double number;
    public:
        Rand(): number(rand() % 100) {}
        double evaluate(){
            return number;
        }
        string stringify(){
         return to_string(number);
     }
};

class Mult : public Base {
    protected:
        Base *leftChild;
        Base *rightChild;
    public:
        Mult(): leftChild(nullptr), rightChild(nullptr) {}
        Mult(Base* left, Base* right): leftChild(left), rightChild(right) {}
        double evaluate(){
            return leftChild->evaluate() * rightChild->evaluate();
        }
        string stringify(){
            return to_string(leftChild->evaluate()) + " * " + to_string(rightChild->evaluate());
     }
};

class Div : public Base {
    protected:
        Base *leftChild;
        Base *rightChild;
    public:
        Div(): leftChild(nullptr), rightChild(nullptr) {}
        Div(Base* left, Base* right): leftChild(left), rightChild(right) {}
        double evaluate(){
            return leftChild->evaluate() / rightChild->evaluate();
        }
        string stringify(){
            return to_string(leftChild->evaluate()) + " / " + to_string(rightChild->evaluate());
        }
};

class Add : public Base {
    protected:
        Base *leftChild;
        Base *rightChild;
    public:
        Add(): leftChild(nullptr), rightChild(nullptr) {}
        Add(Base* left, Base* right): leftChild(left), rightChild(right) {}
        double evaluate(){
            return leftChild->evaluate() + rightChild->evaluate();
        }
        string stringify(){
            return to_string(leftChild->evaluate()) + " + " + to_string(rightChild->evaluate());
        }
};

class Sub : public Base {
    protected:
        Base *leftChild;
        Base *rightChild;
    public:
        Sub(): leftChild(nullptr), rightChild(nullptr) {}
        Sub(Base* left, Base* right): leftChild(left), rightChild(right) {}
        double evaluate(){
            return leftChild->evaluate() - rightChild->evaluate();
        }
        string stringify(){
            return to_string(leftChild->evaluate()) + " - " + to_string(rightChild->evaluate());
        }
};

class Pow : public Base {
    protected:
        Base *oneChild;
    public:
        Pow(): oneChild(nullptr) {}
        Pow(Base* oneNum): oneChild(oneNum){}
        double evaluate(){
            return oneChild->evaluate() * oneChild->evaluate();
        }
        string stringify(){
            return to_string(oneChild->evaluate()) + " * " + to_string(oneChild->evaluate());
        }
};

class SevenOpMock: public Base{
   protected:
     double num;
   public:
      SevenOpMock(): num(0){ };
      double evaluate() { return 7.5;}
      string stringify() {return "7.500000";}
};
