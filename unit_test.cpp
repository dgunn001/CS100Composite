#include "base.h"
#include "base.cpp"

#include "gtest/gtest.h"


TEST(AddTest, AddDouble){
   Op* num1 = new Op(1.1);
   Op* num2 = new Op(2.2);
   Add* result = new Add(num1,num2);
   EXPECT_EQ(3.3,result->evaluate());
}

TEST(MulTest, MulDouble){
   Op* num1 = new Op(1.1);
   Op* num2 = new Op(2.2);
   Mul* result = new Mul(num1,num2);
   EXPECT_EQ(2.42, result->evaluate());
}

TEST(SubTest, SubDouble){
   Op* num1 = new Op(1.1);
   Op* num2 = new Op(2.2);
   Sub* result = new Sub(num1,num2);
   EXPECT_EQ(-1.1, result->evaluate());
}

TEST(DivTest, DivDouble){
   Op* num1 = new Op(1.1);
   Op* num2 = new Op(2.2);
   Div* result = new Div(1.1,2.2);
   EXPECT_EQ(0.5, result->evaluate());
}



int main(int argc, char **argv){
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TEST();
}
