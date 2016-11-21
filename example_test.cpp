//
// Created by Alexey Klimkin on 11/21/16.
//

#include <gmock/gmock.h>

class ExampleTest : public ::testing::Test {
protected:
    void SetUp() override {
    }
};

TEST_F(ExampleTest, Nothing) {
    EXPECT_EQ(true, false);
}