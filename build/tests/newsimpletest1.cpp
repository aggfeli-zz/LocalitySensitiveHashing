/* 
 * File:   newsimpletest1.cpp
 * Author: angelique
 *
 * Created on Nov 29, 2016, 4:40:25 PM
 */

#include <stdlib.h>
#include <iostream>
#include <string>

#include "Cluster.h"

using namespace std;
/*
 * Simple C++ Test Suite
 */

void k_medoidspp(Cluster** cluster, int k, int N, string method, Hamming** hamming, CosineSim** cosine, Euclidean** euclidean, DistanceMatrix* distance);

void testK_medoidspp() {
    Cluster** cluster;
    int k;
    int N;
    string method;
    Hamming** hamming;
    CosineSim** cosine;
    Euclidean** euclidean;
    DistanceMatrix* distance;
    k_medoidspp(cluster, k, N, method, hamming, cosine, euclidean, distance);
    for (int i = 0; i < k; i++){
        if (cluster[i]->getCentroid() == NULL) {
            std::cout << "%TEST_FAILED% time=0 testname=testK_medoidspp (newsimpletest1) message=error message sample" << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% newsimpletest1" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testK_medoidspp (newsimpletest1)" << std::endl;
    testK_medoidspp();
    std::cout << "%TEST_FINISHED% time=0 testK_medoidspp (newsimpletest1)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

