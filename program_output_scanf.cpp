#include <cstdio>
#include <iostream>

int main(int argc, char const *argv[])
{
    system("cls");
    // membuat variabel
    char name[20], web_address[30];
    printf("Masukkan Nama: "); scanf_s("%s", &name);
    printf("Masukan Alamat web: "); scanf_s("%s", &web_address);
    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Web yang diinputkan: %s\n", web_address);
    return 0;
}
