#include <stdio.h> 
#include <locale.h> 
int main() {
    // ������ ����� ����� 
    setlocale(LC_ALL, "RU");
    int n = 0, m = 0;
    float A[50][50];
    // ���� ���������� ����� 
    printf("������� ����� ����� �� 100 \n");
    scanf_s("%d", &n);
    while (n < 2 or n>100) {
        printf("������� ������ �������� \n");
        scanf_s("%d", &n);
    }
    // ���� ���������� �������� 
    printf("����� ����� ��������\n");
    scanf_s("%d", &m);
    while (m < 2 || m>100) {
        printf("����� ������ �������� \n");
        scanf_s("%d", &m);
    }
    // ���� ������� 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("A[%d,%d]= ", i, j);
            scanf_s("%f", &A[i][j]);
        }
    }
    // ����� �������  
    printf("�� ����� �������:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%12f", A[i][j]);
        }
        printf("\n");
    }
    //���������� 
    double c = 0, r = 0, s = 0;
    int k = m * n;
    printf("����� ��������, �� ������� ����� ���������� ����� \n");
    scanf_s("%lf", &r);
    //������ �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s = s + A[i][j];
        }
    }
    double sr = s / k;
    printf("����� ���� ��������� ������� ����� %lf \n���������� ��������� ����� %d \n������� �������� ����� %lf \n", s, k, sr);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((A[i][j] - sr) > r || (sr - A[i][j]) > r)
            {
                A[i][j] = 0;
            }
        }
    }
    printf("���������� �������: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%12f", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}