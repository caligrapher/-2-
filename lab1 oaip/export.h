#pragma once
#define MAX_EXPORTS 100

struct Export {
    int contractNumber;
    float contractAmount;
};

void sortExports(struct Export exports[], int numExports);
void displayExports(struct Export exports[], int numExports);