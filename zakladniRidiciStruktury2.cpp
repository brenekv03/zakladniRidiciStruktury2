
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int n;
	srand((unsigned)time(NULL));
	cout << "Zadejte cislo n: ";
	cin >> n;
	double soucetPrvku = 0;
	cout << "\na-Cyklem for\nb-Cyklem while\nc-Cyklem do while\nk-Konec\nZvolte si cim chcete pocitat: ";
	char volba;
	cin >> volba;
	while (volba != 'k')
	{
		soucetPrvku = 0;
		switch (volba)
		{
		case 'a':
		{
			for (int i = 0; i < n; i++)
			{
				double nahodneCislo = 10 + (100 - 10) * (double)rand() / (RAND_MAX + 1);
				soucetPrvku += nahodneCislo;
			}
			cout << "\nSoucet vygenerovanych je: " << soucetPrvku;
		}break;
		case 'b':
		{
			int i = 0;
			while (i < n)
			{
				double nahodneCislo = 10 + (100 - 10) * (double)rand() / (RAND_MAX + 1);
				soucetPrvku += nahodneCislo;
				i++;
			}
			cout << "\nSoucet vygenerovanych je: " << soucetPrvku;
		}break;
		case 'c':
		{
			int i = 0;
			do
			{
				double nahodneCislo = 10 + (100 - 10) * (double)rand() / (RAND_MAX + 1);
				soucetPrvku += nahodneCislo;
				i++;
			} while (i < n);
			cout << "\nSoucet vygenerovanych je: " << soucetPrvku;
		}
		case 'k':
		{
			cout << "Zvolili jste konec";
		}
		default:
		{
			cout << "\nSpatna volba";
		}break;
		}
		cout << "Zadejte cislo n: ";
		cin >> n;
		cout << "a-Cyklem while\nb-Cyklem do while\nc-Cyklem for\nk-Konec\nZvolte si cim chcete pocitat: ";
		cin >> volba;
	}
}

