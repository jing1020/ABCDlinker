#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

int main() {
    char filename[50];
    std::ifstream myfile;
    myfile.open(filename);
    if (!myfile.is_open()){
        exit(EXIT_FAILURE);
    }
    char
    const char * split = ",\t\n";
    char *p;
    p=strtok(myfile,split);





}