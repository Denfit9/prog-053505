#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(void)                 
{
    setlocale(LC_ALL, "Rus");
    int n,inf;
    inf = 0;
    while (inf==0) {
        do {
            printf("\nEnter your number\n");
            scanf_s("%d", &n);
        } while (n >= 100 || n < 1);
        if (n <= 19) {
            switch (n) {
            case 1:
                printf("����");
                break;
            case 2:
                printf("���");
                break;
            case 3:
                printf("���");
                break;
            case 4:
                printf("������");
                break;
            case 5:
                printf("����");
                break;
            case 6:
                printf("�����");
                break;
            case 7:
                printf("����");
                break;
            case 8:
                printf("������");
                break;
            case 9:
                printf("������");
                break;
            case 10:
                printf("������");
                break;
            case 11:
                printf("�����������");
                break;
            case 12:
                printf("����������");
                break;
            case 13:
                printf("����������");
                break;
            case 14:
                printf("������������");
                break;
            case 15:
                printf("����������");
                break;
            case 16:
                printf("�����������");
                break;
            case 17:
                printf("����������");
                break;
            case 18:
                printf("������������");
                break;
            case 19:
                printf("������������");
                break;
            default:
                break;
            }
        }
        else {
            switch (n / 10) {
            case 2:
                printf("��������");
                break;
            case 3:
                printf("��������");
                break;
            case 4:
                printf("�����");
                break;
            case 5:
                printf("���������");
                break;
            case 6:
                printf("����������");
                break;
            case 7:
                printf("���������");
                break;
            case 8:
                printf("�����������");
                break;
            case 9:
                printf("���������");
                break;
            default:
                break;
            }

            switch (n % 10) {
            case 0:
                break;
            case 1:
                printf(" ����");
                break;
            case 2:
                printf(" ���");
                break;
            case 3:
                printf(" ���");
                break;
            case 4:
                printf(" ������");
                break;
            case 5:
                printf(" ����");
                break;
            case 6:
                printf(" �����");
                break;
            case 7:
                printf(" ����");
                break;
            case 8:
                printf(" ������");
                break;
            case 9:
                printf(" ������");
                break;
            default:
                break;
            }
        }
    }
    return 0;                   
}