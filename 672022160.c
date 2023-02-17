#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main(), milih1(), milih2(), milih3(), milih4(), milih5(), milih6(), milih7(), milih8();
char id[100][100];
char password[100][100];
int idx = 0;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void panah(int posisiMenu, int posisiPanah)
{
    if (posisiPanah == posisiMenu)
        printf("==> ");
    else
        printf("   ");
}

int menu1()
{
    system("cls");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("<============================>\n");
        gotoxy(48, 3);
        printf("TUGAS KALKULATOR");
        gotoxy(40, 5);
        printf("<============================>\n");
        gotoxy(40, 7);
        panah(1, posisi);
        printf("1. PingPoroLanSudo");
        gotoxy(40, 8);
        panah(2, posisi);
        printf("2. SinCosTan");
        gotoxy(40, 9);
        panah(3, posisi);
        printf("3. Hitung Keliling dan Luas");
        gotoxy(40, 10);
        panah(4, posisi);
        printf("4. Hitung Akar Kuadrat");
        gotoxy(40, 11);
        panah(5, posisi);
        printf("5. Log Out");
        gotoxy(40, 13);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu2()
{
    system("cls");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("<============================>\n");
        gotoxy(47, 3);
        printf("Ping Poro Lan Sudo");
        gotoxy(40, 5);
        printf("<============================>\n");
        gotoxy(40, 7);
        panah(1, posisi);
        printf("1. Perkalian");
        gotoxy(40, 8);
        panah(2, posisi);
        printf("2. Pembagian");
        gotoxy(40, 9);
        panah(3, posisi);
        printf("3. Penjumlahan");
        gotoxy(40, 10);
        panah(4, posisi);
        printf("4. Pengurangan");
        gotoxy(40, 11);
        panah(5, posisi);
        printf("5. Return Menu Utama");
        gotoxy(40, 13);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu3()
{
    system("cls");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("<============================>\n");
        gotoxy(50, 3);
        printf("Sin Cos Tan");
        gotoxy(40, 5);
        printf("<============================>\n");
        gotoxy(45, 7);
        panah(1, posisi);
        printf("1. Sinus");
        gotoxy(45, 8);
        panah(2, posisi);
        printf("2. Cosinus");
        gotoxy(45, 9);
        panah(3, posisi);
        printf("3. Tangen");
        gotoxy(45, 10);
        panah(4, posisi);
        printf("4. Return Menu Utama");
        gotoxy(40, 12);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 4;
        }
        else if (posisi > 4)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu4()
{
    system("cls");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("<============================>\n");
        gotoxy(46, 3);
        printf("Keliling Luas Volume");
        gotoxy(40, 5);
        printf("<============================>\n");
        gotoxy(40, 7);
        panah(1, posisi);
        printf("1. Hitung Keliling Bangun Datar");
        gotoxy(40, 8);
        panah(2, posisi);
        printf("2. Hitung Luas Bangun Datar");
        gotoxy(40, 9);
        panah(3, posisi);
        printf("3. Hitung Volume Bangun Ruang");
        gotoxy(40, 10);
        panah(4, posisi);
        printf("4. Return Menu Utama");
        gotoxy(40, 12);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 4;
        }
        else if (posisi > 4)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu5()
{
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("<============================>\n");
        gotoxy(44, 3);
        printf(" Keliling Bangun Datar");
        gotoxy(40, 5);
        printf("<============================>\n");
        gotoxy(40, 7);
        panah(1, posisi);
        printf("1. Keliling Persegi");
        gotoxy(40, 8);
        panah(2, posisi);
        printf("2. Keliling Trapesium");
        gotoxy(40, 9);
        panah(3, posisi);
        printf("3. Keliling Layang-Layang");
        gotoxy(40, 10);
        panah(4, posisi);
        printf("4. Keliling Lingkaran");
        gotoxy(40, 11);
        panah(5, posisi);
        printf("5. Return Menu Utama");
        gotoxy(40, 13);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu6()
{
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("<============================>\n");
        gotoxy(46, 3);
        printf(" Luas Bangun Datar");
        gotoxy(40, 5);
        printf("<============================>\n");
        gotoxy(40, 7);
        panah(1, posisi);
        printf("1. Luas Persegi");
        gotoxy(40, 8);
        panah(2, posisi);
        printf("2. Luas Trapesium");
        gotoxy(40, 9);
        panah(3, posisi);
        printf("3. Luas Layang-Layang");
        gotoxy(40, 10);
        panah(4, posisi);
        printf("4. Luas Lingkaran");
        gotoxy(40, 11);
        panah(5, posisi);
        printf("5. Return Menu Utama");
        gotoxy(40, 13);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu7()
{
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("<============================>\n");
        gotoxy(45, 3);
        printf(" Volume Bangun Ruang");
        gotoxy(40, 5);
        printf("<============================>\n");
        gotoxy(40, 7);
        panah(1, posisi);
        printf("1. Volume Kubus");
        gotoxy(40, 8);
        panah(2, posisi);
        printf("2. Volume Prisma");
        gotoxy(40, 9);
        panah(3, posisi);
        printf("3. Volume Limas");
        gotoxy(40, 10);
        panah(4, posisi);
        printf("4. Volume Bola");
        gotoxy(40, 11);
        panah(5, posisi);
        printf("5. Return Menu Utama");
        gotoxy(40, 13);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu_log()
{
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(40, 1);
        printf("<============================>\n");
        gotoxy(45, 3);
        printf("Mending Login dulu mas");
        gotoxy(40, 5);
        printf("<============================>\n");
        gotoxy(40, 7);
        panah(1, posisi);
        printf("1. Register");
        gotoxy(40, 8);
        panah(2, posisi);
        printf("2. Login");
        gotoxy(40, 9);
        panah(3, posisi);
        printf("3. Exit");
        gotoxy(40, 11);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 3;
        }
        else if (posisi > 3)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

void perkalian()
{
    float a, b;
    system("cls");
    printf("Masukkan angka pertama = ");
    scanf("%f", &a);
    printf("Masukkan angka kedua = ");
    scanf("%f", &b);
    printf("Hasil dari %.2f * %.2f adalah = %.2f\n", a, b, a * b);
    char y;
kali:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void perkalian();
    }
    else if (y == 'Y')
    {
        void perkalian();
    }
    else if (y == 'n')
    {
        milih2();
    }
    else if (y == 'N')
    {
        milih2();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto kali;
    }
}
void pembagian()
{
    system("cls");
    float a, b;
    printf("Masukkan angka pertama = ");
    scanf("%f", &a);
    printf("Masukkan angka kedua = ");
    scanf("%f", &b);
    printf("Hasil dari %.2f / %.2f adalah = %.2f\n", a, b, a / b);
    char y;
bagi:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void pembagian();
    }
    else if (y == 'Y')
    {
        void pembagian();
    }
    else if (y == 'n')
    {
        milih2();
    }
    else if (y == 'N')
    {
        milih2();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto bagi;
    }
}
void penjumlahan()
{
    system("cls");
    float a, b;
    printf("Masukkan angka pertama = ");
    scanf("%f", &a);
    printf("Masukkan angka kedua = ");
    scanf("%f", &b);
    printf("Hasil dari %.2f + %.2f adalah = %.2f\n", a, b, a + b);
    char y;
jumlah:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void penjumlahan();
    }
    else if (y == 'Y')
    {
        void penjumlahan();
    }
    else if (y == 'n')
    {
        milih2();
    }
    else if (y == 'N')
    {
        milih2();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto jumlah;
    }
}
void pengurangan()
{
    system("cls");
    float a, b;
    printf("Masukkan angka pertama = ");
    scanf("%f", &a);
    printf("Masukkan angka kedua = ");
    scanf("%f", &b);
    printf("Hasil dari %.2f - %.2f adalah = %.2f\n", a, b, a - b);
    char y;
kurang:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void pengurangan();
    }
    else if (y == 'Y')
    {
        void pengurangan();
    }
    else if (y == 'n')
    {
        milih2();
    }
    else if (y == 'N')
    {
        milih2();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto kurang;
    }
}

void sinus()
{
    system("cls");
    float a;
    printf("Masukkan derajat sinus  = ");
    scanf("%f", &a);
    printf("Hasil Sinus adalah = %.2f\n", sin(3.14 / 180 * a));
    char y;
sinus:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void sinus();
    }
    else if (y == 'Y')
    {
        void sinus();
    }
    else if (y == 'n')
    {
        milih3();
    }
    else if (y == 'N')
    {
        milih3();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto sinus;
    }
}
void cosinus()
{
    system("cls");
    float a;
    printf("Masukkan derajat Cosinus  = ");
    scanf("%f", &a);
    printf("Hasil Cosinus adalah = %.2f\n", cos(3.14 / 180 * a));
    char y;
cosinus:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void cosinus();
    }
    else if (y == 'Y')
    {
        void cosinus();
    }
    else if (y == 'n')
    {
        milih3();
    }
    else if (y == 'N')
    {
        milih3();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto cosinus;
    }
}
void tangen()
{
    system("cls");
    float a;
    printf("Masukkan derajat Tangen  = ");
    scanf("%f", &a);
    printf("Hasil Tangen adalah = %.2f\n", tan(3.14 / 180 * a));
    char y;
tangen:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void tangen();
    }
    else if (y == 'Y')
    {
        void tangen();
    }
    else if (y == 'n')
    {
        milih3();
    }
    else if (y == 'N')
    {
        milih3();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto tangen;
    }
}

void kll_persegi()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Persegi : ");
    scanf("%f", &a);
    printf("Masukkan lebar Persegi   : ");
    scanf("%f", &b);
    printf("Keliling Persegi Adalah  : %.2f\n", 2 * a + 2 * b);
    char y;
kll_p:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void kll_persegi();
    }
    else if (y == 'Y')
    {
        void kll_persegi();
    }
    else if (y == 'n')
    {
        milih5();
    }
    else if (y == 'N')
    {
        milih5();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto kll_p;
    }
}
void kll_trapesium()
{
    system("cls");
    float a, b, c;
    printf("Masukkan Sisi Atas Trapesium Sama Kaki   : ");
    scanf("%f", &a);
    printf("Masukkan Sisi Bawah Trapesium Sama Kaki  : ");
    scanf("%f", &b);
    printf("Masukkan Sisi Miring Trapesium Sama Kaki : ");
    scanf("%f", &c);
    printf("Keliling Trapesium Sama Kaki Adalah      : %.2f\n", 2 * c + a + b);
    char y;
kll_trap:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void kll_trapesium();
    }
    else if (y == 'Y')
    {
        void kll_trapesium();
    }
    else if (y == 'n')
    {
        milih5();
    }
    else if (y == 'N')
    {
        milih5();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto kll_trap;
    }
}
void kll_layang2()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Sisi Atas Layang-layang : ");
    scanf("%f", &a);
    printf("Masukkan Sisi Bawah Layang-layang        : ");
    scanf("%f", &b);
    printf("Keliling Layang-layang Adalah            : %.2f\n", 2 * a + 2 * b);
    char y;
kll_lay:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void kll_layang2();
    }
    else if (y == 'Y')
    {
        void kll_layang2();
    }
    else if (y == 'n')
    {
        milih5();
    }
    else if (y == 'N')
    {
        milih5();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto kll_lay;
    }
}
void kll_lingkaran()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Diameter Lingkaran  : ");
    scanf("%f", &a);
    printf("Masukkan Panjang Jari-jari Lingkaran : ");
    scanf("%f", &b);
    printf("Keliling Lingkaran Berdasarkan Jari-jari Adalah : %.2f\n", 2 * 3.14 * b);
    printf("Keliling Lingkaran Berdasarkan Diameter Adalah  : %.2f\n", 3.14 * a);
    char y;
kll_ling:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void kll_lingkaran();
    }
    else if (y == 'Y')
    {
        void kll_lingkaran();
    }
    else if (y == 'n')
    {
        milih5();
    }
    else if (y == 'N')
    {
        milih5();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto kll_ling;
    }
}

void ls_pp()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Persegi : ");
    scanf("%f", &a);
    printf("Masukkan lebar Persegi   : ");
    scanf("%f", &b);
    printf("Luas Persegi Adalah      : %.2f\n", a * b);
    char y;
ls_pp:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void ls_pp();
    }
    else if (y == 'Y')
    {
        void ls_pp();
    }
    else if (y == 'n')
    {
        milih6();
    }
    else if (y == 'N')
    {
        milih6();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto ls_pp;
    }
}
void ls_trapesium()
{
    system("cls");
    float a, b, c;
    printf("Masukkan Sisi Atas Trapesium Sama Kaki  : ");
    scanf("%f", &a);
    printf("Masukkan Sisi Bawah Trapesium Sama Kaki : ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Trapesium Sama Kaki     : ");
    scanf("%f", &c);
    printf("Luas Trapesium Sama Kaki Adalah         : %.2f\n", 0.5 * c * (a + b));
    char y;
ls_trap:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void ls_trapesium();
    }
    else if (y == 'Y')
    {
        void ls_trapesium();
    }
    else if (y == 'n')
    {
        milih6();
    }
    else if (y == 'N')
    {
        milih6();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto ls_trap;
    }
}
void ls_layang2()
{
    system("cls");
    float a, b;
    printf("Masukkan Diagonal Panjang Layang-layang : ");
    scanf("%f", &a);
    printf("Masukkan Diagonal Lebar Layang-layang   : ");
    scanf("%f", &b);
    printf("Luas Layang-layang Adalah               : %.2f\n", 0.5 * a * b);
    char y;
ls_lay:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void ls_layang2();
    }
    else if (y == 'Y')
    {
        void ls_layang2();
    }
    else if (y == 'n')
    {
        milih6();
    }
    else if (y == 'N')
    {
        milih6();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto ls_lay;
    }
}
void ls_lingkaran()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Diameter Lingkaran  : ");
    scanf("%f", &a);
    printf("Masukkan Panjang Jari-jari Lingkaran : ");
    scanf("%f", &b);
    printf("Luas Lingkaran Berdasarkan Jari-jari Adalah : %.2f\n", 3.14 * pow(b, 2));
    printf("Luas Lingkaran Berdasarkan Diameter Adalah  : %.2f\n", 3.14 * pow(a / 2, 2));
    char y;
ls_ling:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void lingkaran();
    }
    else if (y == 'Y')
    {
        void lingkaran();
    }
    else if (y == 'n')
    {
        milih6();
    }
    else if (y == 'N')
    {
        milih6();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto ls_ling;
    }
}

void vol_kubus()
{
    system("cls");
    float a;
    printf("Masukkan Panjang Sisi Kubus : ");
    scanf("%f", &a);
    printf("Volume Kubus Adalah         : %.2f\n", pow(a, 3));
    char y;
vol_kub:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void vol_kubus();
    }
    else if (y == 'Y')
    {
        void vol_kubus();
    }
    else if (y == 'n')
    {
        milih7();
    }
    else if (y == 'N')
    {
        milih7();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto vol_kub;
    }
}
void vol_prisma()
{
    system("cls");
    float a, b, c, d, e, f;
    printf("Masukkan Sisi Persegi        : ");
    scanf("%f", &a);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Segitiga     : ");
    scanf("%f", &c);
    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%f", &d);
    printf("Masukkan Diameter Lingkaran  : ");
    scanf("%f", &e);
    printf("Masukkan Tinggi Prisma       : ");
    scanf("%f", &f);
    printf("Volume Prisma Persegi Adalah                 : %.2f\n", pow(a, 2) * f);
    printf("Volume Prisma Segitiga Adalah                : %.2f\n", 0.5 * b * c * f);
    printf("Volume Silinder Berdasarkan Jari-jari Adalah : %.2f\n", 3.14 * pow(d, 2) * f);
    printf("Volume Silinder Berdasarkan Diameter Adalah  : %.2f\n", 3.14 * pow(e / 2, 2) * f);
    char y;
vol_pris:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void vol_prisma();
    }
    else if (y == 'Y')
    {
        void vol_prisma();
    }
    else if (y == 'n')
    {
        milih7();
    }
    else if (y == 'N')
    {
        milih7();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto vol_pris;
    }
}
void vol_limas()
{
    system("cls");
    float a, b, c, d, e, f;
    printf("Masukkan Sisi Persegi        : ");
    scanf("%f", &a);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Segitiga     : ");
    scanf("%f", &c);
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &d);
    printf("Masukkan Diameter Lingkaran  : ");
    scanf("%f", &e);
    printf("Masukkan Tinggi Limas        : ");
    scanf("%f", &f);
    printf("Volume Limas Persegi Adalah                        : %.2f\n", 1.0 / 3.0 * pow(a, 2) * f);
    printf("Volume Limas Segitiga Adalah                       : %.2f\n", 1.0 / 3.0 * 0.5 * b * c * f);
    printf("Volume Limas Silinder Berdasarkan Jari-jari Adalah : %.2f\n", 1.0 / 3.0 * 3.14 * pow(d, 2) * f);
    printf("Volume Limas Silinder Berdasarkan Diameter Adalah  : %.2f\n", 1.0 / 3.0 * 3.14 * pow(e / 2, 2) * f);
    char y;
vol_lim:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void vol_limas();
    }
    else if (y == 'Y')
    {
        void vol_limas();
    }
    else if (y == 'n')
    {
        milih7();
    }
    else if (y == 'N')
    {
        milih7();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto vol_lim;
    }
}
void vol_bola()
{
    system("cls");
    float a, b;
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &a);
    printf("Masukkan Diameter Lingkaran  : ");
    scanf("%f", &b);
    printf("Volume Bola Berdasarkan Jari-jari Adalah : %.2f\n", 4.0 / 3.0 * 3.14 * pow(a, 3));
    printf("Volume Bola Berdasarkan Diameter Adalah  : %.2f\n", 4.0 / 3.0 * 3.14 * pow((b / 2), 3));
    char y;
vol_bol:
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void vol_bola();
    }
    else if (y == 'Y')
    {
        void vol_bola();
    }
    else if (y == 'n')
    {
        milih7();
    }
    else if (y == 'N')
    {
        milih7();
    }
    else
    {
        printf("pilihan tidak tersedia\n");
        goto vol_bol;
    }
}

void akar()
{
    system("cls");
    float a;
    printf("masukkan bilangan yang akan diakar = ");
    scanf("%f", &a);
    printf("Hasil akar dari %.2f adalah %.2f\n", a, sqrt(a));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void akar();
    }
    else if (y == 'Y')
    {
        void akar();
    }
    else if (y == 'n')
    {
        milih1();
    }
    else if (y == 'N')
    {
        milih1();
    }
}

int login()
{
    char name[100];
    char pass[100];
    char key;
    while (1)
    {
        int i = 0;
        system("cls");
        gotoxy(40, 2);
        printf("masukkan id       : ");
        scanf(" %[^\n]s", &name);
        gotoxy(40, 3);

        printf("masukkan password : ");
        while ((key = getch()) != 13)
        {
            if (i < 0)
                i = 0;
            if (key == 8)
            {
                if (i == 0)
                    continue;
                else
                {
                    printf("\b \b");
                    i--;
                    continue;
                }
            }
            if (i == 8)
            {
                continue;
            }
            printf("*");
            pass[i] = key;
            i++;
        }
        pass[i] = '\0';
        for (int i = 0; i < 100; i++)
        {
            if (strcmp(id[i], name) == 0 && strcmp(password[i], pass) == 0)
            {
                system("cls");
                gotoxy(40, 2);
                printf("login berhasil.");
                Sleep(1000);
                milih1();
            }
            else
            {
                system("cls");
                gotoxy(40, 2);
                printf("Id/Password salah.\n");
                Sleep(1000);
                milih8();
            }
        }
    }
}

void reg()
{
    system("cls");
    gotoxy(40, 2);
    printf("masukkan id = ");
    scanf("%s", &id[idx]);
    gotoxy(40, 3);
    printf("masukkan password = ");
    scanf("%s", &password[idx]);
    idx++;
    milih8();
}

void keluar_diluar()
{
    system("cls");
    gotoxy(46, 3);
    printf("wakkeh tenan rek tugase:))))))))))))))))))))))))))))))))))))))))))))))");
    Sleep(1000);
}

// menu utama banget
int milih1()
{
    int pilihan = menu1();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            milih2();
            break;
        case 2:
            milih3();
            break;
        case 3:
            milih4();
            break;
        case 4:
            akar();
            break;
        case 5:
            milih8();
            break;
        }
    }
}

// menu pingporosudo
int milih2()
{
    int pilihan = menu2();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            perkalian();
            break;
        case 2:
            pembagian();
            break;
        case 3:
            penjumlahan();
            break;
        case 4:
            pengurangan();
            break;
        case 5:
            milih1();
            break;
        }
    }
}

// menu sincostan
int milih3()
{
    int pilihan = menu3();

    while (pilihan != 5)
    {
        switch (pilihan)
        {
        case 1:
            sinus();
            break;
        case 2:
            cosinus();
            break;
        case 3:
            tangen();
            break;
        case 4:
            milih1();
            break;
        }
    }
}

// menu induk keliling luas volume
int milih4()
{
    int pilihan = menu4();

    while (pilihan != 5)
    {
        switch (pilihan)
        {
        case 1:
            milih5();
            break;
        case 2:
            milih6();
            break;
        case 3:
            milih7();
            break;
        case 4:
            milih1();
            break;
        }
    }
}

// menu keliling
int milih5()
{
    int pilihan = menu5();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            kll_persegi();
            break;
        case 2:
            kll_trapesium();
            break;
        case 3:
            kll_layang2();
            break;
        case 4:
            kll_lingkaran();
            break;
        case 5:
            milih4();
            break;
        }
    }
}

// menu luas
int milih6()
{
    int pilihan = menu6();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            ls_pp();
            break;
        case 2:
            ls_trapesium();
            break;
        case 3:
            ls_layang2();
            break;
        case 4:
            ls_lingkaran();
            break;
        case 5:
            milih4();
            break;
        }
    }
}

// menu volume
int milih7()
{
    int pilihan = menu7();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            vol_kubus();
            break;
        case 2:
            vol_prisma();
            break;
        case 3:
            vol_limas();
            break;
        case 4:
            vol_bola();
            break;
        case 5:
            milih4();
            break;
        }
    }
}

// menu reglog
int milih8()
{
    int pilihan = menu_log();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            reg();
            break;
        case 2:
            login();
        case 3:
            keluar_diluar();
            exit(0);
            break;
        }
    }
}

int main()
{
    system("color 70");
    milih8();
}