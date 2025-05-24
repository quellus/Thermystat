#include <gtest/gtest.h>
#include "../src/Controller.h"

TEST(ControllerTest, GetTargetTemperatureChanges) {
    Controller controller;
    float initialTemperature = controller.getTargetTemperature();
    float nextTemperature = controller.getTargetTemperature();
    
    EXPECT_EQ(initialTemperature, nextTemperature -1);
}