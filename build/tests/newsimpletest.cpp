/* 
 * File:   newsimpletest.cpp
 * Author: angelique
 *
 * Created on Nov 29, 2016, 4:36:11 PM
 */

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;
/*
 * Simple C++ Test Suite
 */

int DistanceCosine(string point1, string point2);

void testDistanceCosine() {
    string point1;
    string point2;
    int result = DistanceCosine(point1, point2);
    if (result < 0) {
        std::cout << "%TEST_FAILED% time=0 testname=testDistanceCosine (newsimpletest) message=error message sample" << std::endl;
    }
}

float DistanceEuclidean(string point1, string point2);

void testDistanceEuclidean() {
    string point1;
    string point2;
    float result = DistanceEuclidean(point1, point2);
    if (result < 0) {
        std::cout << "%TEST_FAILED% time=0 testname=testDistanceEuclidean (newsimpletest) message=error message sample" << std::endl;
    }
}

int DistanceHamming(string point1, string point2);

void testDistanceHamming() {
    string point1;
    string point2;
    int result = DistanceHamming(point1, point2);
    if (result < 0) {
        std::cout << "%TEST_FAILED% time=0 testname=testDistanceHamming (newsimpletest) message=error message sample" << std::endl;
    }
}

int MinDistance(string temp1, string temp2, string temp3, int* row, string method);

void testMinDistance() {
    string temp1;
    string temp2;
    string temp3;
    int* row;
    string method;
    int result = MinDistance(temp1, temp2, temp3, row, method);
    if (result < 0) {
        std::cout << "%TEST_FAILED% time=0 testname=testMinDistance (newsimpletest) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testDistanceCosine (newsimpletest)" << std::endl;
    testDistanceCosine();
    std::cout << "%TEST_FINISHED% time=0 testDistanceCosine (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testDistanceEuclidean (newsimpletest)" << std::endl;
    testDistanceEuclidean();
    std::cout << "%TEST_FINISHED% time=0 testDistanceEuclidean (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testDistanceHamming (newsimpletest)" << std::endl;
    testDistanceHamming();
    std::cout << "%TEST_FINISHED% time=0 testDistanceHamming (newsimpletest)" << std::endl;

    std::cout << "%TEST_STARTED% testMinDistance (newsimpletest)" << std::endl;
    testMinDistance();
    std::cout << "%TEST_FINISHED% time=0 testMinDistance (newsimpletest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

