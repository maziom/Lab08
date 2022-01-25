// ConsoleApplication11.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
  /*  //zad1
    int a, * ptr;
    ptr = &a;
    cout << "podaj a: ", cin >> a;
    cout << "adres zmiennej a : " << ptr << endl;
    cout << "wartosc zmiennej a : " << *ptr << endl; */

   /* int a, b, c, * ptr, * ptr1, * ptr2;
    ptr = &a; ptr1 = &b; ptr2 = &c;
    cout << "podaj a: ", cin >> a;
    cout << "podaj b: ", cin >> b;
    cout << "podaj c: ", cin >> c;
    //(double)a;
    cout << "adres zmiennej a : " << ptr << endl;
    cout << "wartosc zmiennej a : " << *ptr << endl;
    cout << "adres zmiennej b : " << ptr1 << endl;
    cout << "wartosc zmiennej b : " << *ptr1 << endl;
    cout << "adres zmiennej c : " << ptr2 << endl;
    cout << "wartosc zmiennej c : " << *ptr2 << endl;
    cout << "roznica a - b: " << (*ptr) - (*ptr1) << endl;
    cout << "srednia z podanych liczb: " << (double)(((*ptr) + (*ptr1) + (*ptr2)) / 3) << endl; */

 /*    //zad2
    int tab[10], *wsk2;
    wsk2 = &tab[0];
    cout << "pierwszy element: " << wsk2 << endl;
    wsk2 = &tab[3];
    cout << "czwarty element: " << wsk2 << endl;
    wsk2 = &tab[0];
    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 10 + 5;
            wsk2 = &tab[i];
        cout << i << "element: " << tab[i] << " " << wsk2 << "\t";
    }
    cout << "\n\n"; */

    //zad3
    int tab[10], * wsk2;
    wsk2 = &tab[0];
    cout << "pierwszy element: " << wsk2 << endl;
    wsk2 = &tab[3];
    cout << "czwarty element: " << wsk2 << endl;
    wsk2 = &tab[0];
    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 10 + 5;
        wsk2 = &tab[i];
        cout << i << "element: " << tab[i] << " " << wsk2 << "\t";
    }
    cout << "\n\n";
    double suma = 0; double srednia;
    for (int* wsk3 = &tab[0]; wsk3 <= &tab[9]; wsk3++)
    {
        suma += (*wsk3);
    }
    srednia = suma / 10;
    cout << "suma= " << suma << "\tsrednia= " << srednia << endl;
    for (int* wsk3 = &tab[0]; wsk3 <= &tab[9]; wsk3++)
    {
        if (*wsk3 > srednia)
            cout << *wsk3 << ",";
    } 
    //zad4

}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
