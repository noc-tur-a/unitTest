// Copyright 2006, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <cstdio>
#include <stdio.h>

#include "algorithms.h"
#include "gtest/gtest.h"

//unsigned int find(const int* a, int n, int val) {
//    for(int i = 0; i < n; i++) {
//        //printf("Number %d\n", a[i]);
//        if(a[i] == val) {
//            return i;
//        }
//    }
//    return n;
//}

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

    int a[] = { 3, 2, 2, 5, 3, 1, 5, 1, 2 };

    unsigned int ret = find(a, sizeof(a)/sizeof(int), 5);  // returns 3
    printf("find Index: %d\n", ret);

    ret = find(a, sizeof(a)/sizeof(int), 6);  // returns 9
    printf("find Index: %d\n", ret);

    ret = max_element(a, sizeof(a)/sizeof(int));
    printf("max_element: Index: %d\n", ret);

    int b = 5;
    ret = max_element(&b, 0);
    printf("max_element: Index: %d\n", ret);

    printArray(a, sizeof(a)/sizeof(int));
    reverse(a, (sizeof(a)/sizeof(int) -1));
    printArray(a, sizeof(a)/sizeof(int));

    return RUN_ALL_TESTS();
}
#endif
