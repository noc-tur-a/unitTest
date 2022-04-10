//
// Created by Volker Tenta on 28.03.22.
//

#include <stdio.h>
#include "gtest/gtest.h"


#if GTEST_OS_ESP8266 || GTEST_OS_ESP32
#if GTEST_OS_ESP8266
extern "C" {
#endif
void setup() { testing::InitGoogleTest(); }

void loop() { RUN_ALL_TESTS(); }

#if GTEST_OS_ESP8266
}
#endif

#else

GTEST_API_ int main(int argc, char **argv) {
    printf("Running main() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);


    return RUN_ALL_TESTS();
}
#endif
