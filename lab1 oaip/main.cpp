#include <stdio.h>
#include "export.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");
    struct Export exports[MAX_EXPORTS];
    int numExports;

    printf("������� ���������� ���������� ��������: ");
    scanf_s("%d", &numExports);

    for (int i = 0; i < numExports; i++) {
        printf("������� ����� ���������: ");
        scanf_s("%d", &exports[i].contractNumber);
        printf("������� ����� ���������: ");
        scanf_s("%f", &exports[i].contractAmount);
    }

    sortExports(exports, numExports);
    displayExports(exports, numExports);

    return 0;
}