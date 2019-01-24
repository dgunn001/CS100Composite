#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, ExampleUnitTest){
   char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "29";
   EXPECT_EQ("29", echo(2,test_val));
}

int main(int argc, char **argv){
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TEST();
}
