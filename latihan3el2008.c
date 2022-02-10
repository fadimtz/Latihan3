#include <stdio.h>

struct persentase_mahasiswa
    {
        char nama [4];
        int nim;
        float persen;
    };

struct persentase_mahasiswa persentase[4] = {};

int main()
{
    int i;

    for (i = 0; i < 4; i++)
    {
        printf ("\n Mahasiswa: \n", i+1);

        printf ("Nama:");
        scanf ("%s", &persentase[4].nama);

        printf ("NIM:");
        scanf ("%d", &persentase[4].nim);

        printf ("persentase kehadiran:");
        scanf ("%f", &persentase[4].persen);
    }

    printf("\n");

    printf ("Mahasiswa yang memiliki jumlah kehadiran kurang dari 80:");

    for (i = 0; i < 4; i++)
    {
        if (persentase[i].persen < 80)
        {
            printf ("\n Nama Mahasiswa: %s \n", persentase[i].nama);
            printf ("\n NIM: %d \n", persentase[i].nim);
        }
    }
    return 0;
}
