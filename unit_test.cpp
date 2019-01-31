#include "base.h"
#include "base.cpp"
#include "SevenOpMock.h"
#include "FiveOpMock.h"
#include "RandMock.h"

#include "gtest/gtest.h"

TEST(OpTest, OpSevenMock){
   Op* num1 = new SevenOpMock();
   Op* num2 = new Op(7.5);
   EXPECT_EQ(num1,num2);
}

TEST(RandTest, RandMock){
   Op* num1 = new RandMock();
   Op* num2 = new Op(6.9);
   EXPECT_EQ(num1,num2);
}

TEST(AddTest, AddDouble){
   Op* num1 = new SevenOpMock();
   Op* num2 = new FiveOpMock();
   Add* result = new Add(num1,num2);
   EXPECT_EQ(2.5,result->evaluate());
}

TEST(MulTest, MulDouble){
   Op* num1 = new SevenOpMock();
   Op* num2 = new FiveOpMock();
   Mul* result = new Mul(num1,num2);
   EXPECT_EQ(37.5, result->evaluate());
}

TEST(SubTest, SubDouble){
   Op* num1 = new SevenOpMock();
   Op* num2 = new FiveOpMock();
   Sub* result = new Sub(num1,num2);
   EXPECT_EQ(2.5, result->evaluate());
}

TEST(DivTest, DivDouble){
   Op* num1 = new Op(7.5);
   Op* num2 = new Op(5);
   Div* result = new Div(num1,num2);
   EXPECT_EQ(1.5, result->evaluate());
}

TEST(ComboTest, DivAddSub){
   Op* num1 = new Op(7.5);
   Op* num2 = new Op(5);
   Op* num3 = new Op(3);
   Mul* result = new Mul(num1,num2);
   Add* result2 = new Add(result, num3);
   EXPECT_EQ(40.5,result->evaluate());
}

 

int main(int argc, char **argv){
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TEST();
}
