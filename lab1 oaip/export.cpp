#include <stdio.h>
#include "export.h"

void sortExports(struct Export exports[], int numExports) {
    // ���������� ������� ��������� �� ������ ���������
    for (int i = 0; i < numExports - 1; i++) {
        for (int j = 0; j < numExports - i - 1; j++) {
            if (exports[j].contractNumber > exports[j + 1].contractNumber) {
                struct Export temp = exports[j];
                exports[j] = exports[j + 1];
                exports[j + 1] = temp;
            }
        }
    }
}

void displayExports(struct Export exports[], int numExports) {
    // ����� ���������� �� ���������� ��������� � ���� �������  
    printf("\n����� ���������\t����� ���������\n");
    for (int i = 0; i < numExports; i++) {
        printf("%d\t\t\t%.2f\n", exports[i].contractNumber, exports[i].contractAmount);
    }
}