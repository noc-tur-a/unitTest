## C/C++ Project with googletest

**author:** Volker Tenta
<br>
**Used IDE:** clion<br>
**run** ./unitTests located in folder cmake-build-debug<br>
Test results are in the folder unitTestResults.<br>

**Files:**<br>
- **Implementation of the algorithms:**
    - algorithms.h
    - algorithms.cpp
- **Implementations of unitTests**
    - findUnitTest.cpp
    - maxElementUnitTest.cpp
    - reverseUnitTest.cpp

<br>
The 8 failing test fail on purpose, either because a wrong arrayLength is passed to the functions, or because of overflows or wrong type casting. 
<img src="unittestResults/unitTestResults_SummaryClion.PNG">
