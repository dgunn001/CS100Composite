#include "base.cpp"

#include "FiveOpMock.h"
#include "RandMock.h"

#include "gtest/gtest.h"

TEST(OpTest, OpSevenMock){
   SevenOpMock* num1 = new SevenOpMock();
   Op* num2 = new Op(7.5);
   EXPECT_EQ(num1->evaluate(),num2->evaluate());
}

TEST(RandTest, RandMock){
   RandMock* num1 = new RandMock();
   Op* num2 = new Op(6.9);
   EXPECT_EQ(num1->evaluate(),num2->evaluate());
}

TEST(AddTest, AddDouble){
   SevenOpMock* num1 = new SevenOpMock();
   FiveOpMock* num2 = new FiveOpMock();
   Add* result = new Add(num1,num2);
   EXPECT_EQ(12.5,result->evaluate());
}

TEST(MultTest, MulDouble){
   SevenOpMock* num1 = new SevenOpMock();
   FiveOpMock* num2 = new FiveOpMock();
   Mult* result = new Mult(num1,num2);
   EXPECT_EQ(37.5, result->evaluate());
}

TEST(SubTest, SubDouble){
   SevenOpMock* num1 = new SevenOpMock();
   FiveOpMock* num2 = new FiveOpMock();
   Sub* result = new Sub(num1,num2);
   EXPECT_EQ(2.5, result->evaluate());
}

TEST(DivTest, DivDouble){
   Op* num1 = new Op(7.5);
   Op* num2 = new Op(5);
   Div* result = new Div(num1,num2);
   EXPECT_EQ(1.5, result->evaluate());
}

TEST(PowTest, PowDouble){
   Op* num1 = new Op(7.5);
   Pow* result = new Pow(num1);
   EXPECT_EQ(56.25, result->evaluate());
}

TEST(ComboTest, MultAdd){
   Op* num1 = new Op(7.5);
   Op* num2 = new Op(5);
   Op* num3 = new Op(3);
   Mult* result = new Mult(num1,num2);
   Add* result2 = new Add(result, num3);
   EXPECT_EQ(40.5,result2->evaluate());
}

 

int main(int argc, char **argv){
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
