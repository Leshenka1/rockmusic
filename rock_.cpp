#include <string>
#include <iostream>
#include <vector>
#include "song.h"
#include "album.h"
#include "musican.h"
#include "group.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string groupname, now;
    cout << "Введите название группы \n";
    getline(cin, groupname);
    group Big_cool_band;
    Big_cool_band.setgroup(groupname);
    int n;
    vector <musican> person;
    cout << "введите кол-во музыкантов\n";
    cin >> n;
   
    cin.ignore(10, '\n');
    cout << "Введите информацию о музыкантах: Имя, Инструмент " << endl;
    for (int i = 0; i < n; i++)
    {
        musican temp;
        string tempName, temptype;
        int tempage;
        cout << "имя " << i + 1 << " музыканта ";
        getline(cin, tempName);
        cout << "инструмент " << i + 1 << " музыканта: ";
        getline(cin, temptype);
        temp.setmusican(tempName);
        temp.setinstrument(temptype);
        temp.setgroup(groupname);
        person.push_back(temp);
    }
    cout << "Введите информацию о альбомах." << endl << "Количество альбомов: ";
    cin >> n;
    cin.ignore(10, '\n');
    cout << "Введите название альбомов:" << endl;
    vector <album> a(n);
    for (int i = 0; i < n; i++)
    {
        album temp2;
        temp2.setgroup(groupname);
        cout << "введите название " << i + 1 << " альбома ";
        string tempname2;
        getline(cin, tempname2);
        cout << "введите год издания " << i + 1 << " альбома ";
        int year;
        cin >> year;
        cin.ignore(10, '\n');
        temp2.setalbum(tempname2);
        try {
            temp2.setdate(year);
        } 
        catch (exception t) {
            cerr << t.what();
        }
        a[i] = temp2;
    }
    cout << "введите информацию о песнях. количество песен: ";
    cin >> n;
    cin.ignore(10,'\n');
    vector <song> b(n);
    for (int i = 0; i < n; i++)
    {
        song temp;
        string tempsong;
        double xtime;
        cout << "название " << i + 1 << " песни: ";
        getline(cin, tempsong);
        cout << "продолжитеельность " << i + 1 << " песни: ";
        cin >> xtime;
        cin.ignore(10, '\n');
        temp.setgroup(groupname);
        temp.setsong(tempsong);
        temp.settime(xtime);
        b[i] = temp;
    }
    cout << "\n\n\n" << "Название группы \n" << Big_cool_band;
    cout << "\nМузыканты :";
    for (int i = 0; i < person.size(); i++) {
        cout << "\n" << i + 1 << ": " << person[i];
        }
    cout << "\nАльбомы ";
    for (int i = 0; i < a.size(); i++) {
        cout << "\n" << i + 1 << ": " << a[i];
        }
    cout << "\nПесни:";
    for (int i = 0; i < b.size(); i++) {
        cout << "\n" << i + 1 << ": " << b[i];
    }


}
