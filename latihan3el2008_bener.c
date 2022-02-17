/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : Overview of C Language
*Percobaan        :3
*Hari dan Tanggal : Kamis, 17 Februari 2022
*Nama (NIM)       : 18320009
*Asisten (NIM)    : 13219010
*Nama File        : soal-01.c
*Deskripsi        : membuatkan platform rekomendasi pilihan harga yang murah dan perjalanan yang singkat
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i;
    int n; /* banyaknya data */
    int x[100]; /* harga */
    int y[100]; /* lama perjalanan */

    printf ("Masukkan banyaknya data = ");
    scanf ("%d", &n);
    printf ("Silahkan mulai pengisian data:");

    for (i=0 ; i<n ; i++)
    {
        printf("\n Masukkan data ke-%d (harga, lama perjalanan) = ", i+1);
        scanf("%d, %d", &x[i], &y[i]);
    }


    int menu; /* pilih menu */
    printf ("Pilihan Menu: \n");
    printf ("1. Harga Termurah\n");
    printf ("2. Perjalanan Tersingkat\n");
    printf ("3. Tampilkan keduanya\n");
    printf ("Pilih menu? (1/2/3) = ");
    scanf ("%d", &menu);

    int murah = x[0]; /* inisialisasi untuk menentukan harga paling murah */
    int indeks_murah;

    for (i=0 ; i<n ; i++)
    {
        if (x[i] < murah)
        {
            murah = x[i];
            indeks_murah = i;
        }
    }

    int singkat = y[0]; /* inisialisasi untuk menentukan jarak paling dekat */
    int indeks_singkat;

    for (i=0 ; i<n ; i++)
    {
        if (y[i] < singkat)
        {
            singkat = y[i];
            indeks_singkat = i;
        }
    }

    /* kalau harga murah ada yang sama, cari yg singkat */
    for (i=0 ; i<n ; i++)
    {
        if (x[i] == murah)
        {
            if (y[i] < singkat)
            {
                singkat = y[i];
                indeks_singkat = i;
            }
        }
    }

    /* kalau lama perjalanan ada yang sama, cari yg murah */
    for (i=0 ; i<n ; i++)
    {
        if (y[i] == singkat)
        {
            if (x[i] < murah)
            {
                murah = x[i];
                indeks_murah = i;
            }
        }
    }

    if (menu == 1)
    {
        printf("Berikut adalah detail pilihan harga termurah yang disarankan:\n");
        printf("Harga = Rp %d\n", x[indeks_murah]);
        printf("Lama perjalanan = %d Jam\n", y[indeks_murah]);
    }

    if (menu == 2)
    {
        printf("Berikut adalah detail pilihan perjalanan tersingkat yang disarankan:\n");
        printf("Harga = Rp %d\n", x[indeks_singkat]);
        printf("Lama perjalanan = %d Jam\n", y[indeks_singkat]);
    }

    if (menu == 3)
    {
        printf("Berikut adalah detail pilihan yang disarankan:\n");
        printf("Harga termurah:\n");
        printf("Harga = Rp %d\n", x[indeks_murah]);
        printf("Lama perjalanan = %d Jam\n", y[indeks_murah]);
        printf("Perjalanan tersingkat:\n");
        printf("Harga = Rp %d\n", x[indeks_singkat]);
        printf("Lama perjalanan = %d Jam\n", y[indeks_singkat]);
    }

    return 0;
}
