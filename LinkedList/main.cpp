#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

void mainMenu();
List L;
address P1 = NULL;
address P2 = NULL;
infotype x;

int main()
{
    createList(L);

    mainMenu();

    return 0;
}

void mainMenu()
{
    /**
    * IS : List sudah dibuat
    * PR : memberikan output pilihan menu kepada user
    *       1. insert first
    *       2. insert after
    *       3. insert last
    *       4. delete first
    *       5. delete after
    *       6. delete last
    *       7. view list
    *       8. insertion sort
    *       9. search
    */
    int pilihan;
    address P1,P2,P;
    bus busprec;
    cout << "======MENU======"<<endl;
    cout <<"1. insert first"<<endl;
    cout <<"2. insert after"<< endl;
    cout <<"3. insert last"<< endl;
    cout <<"4. delete first"<<endl;
    cout <<"5. delete after"<< endl;
    cout <<"6. delete last"<< endl;
    cout <<"7. view list"<< endl;
    cout <<"8. insertion sort"<<endl;
    cout <<"9. search"<<endl;
    cout <<"================="<<endl;
    cout <<"Pilihan : "<<endl;
    cin >> pilihan;

    while (pilihan != 0)
    {
        switch (pilihan)
    {
    case 1 :
    {
        cout << "Masukkan data bus : "<<endl;
        cout << "ID Bus : ";
        cin >>  bus.id << endl;;
        cout << "Brand Bus : ";
        cin >> bus.brand<<endl;
        cout << "Tipe Bus : ";
        cin >> bus.type << endl;
        cout << "Plat Bus : ";
        cin >> bus.plat<<endl;
        cout << "Kapasitas Bus : ";
        cin >> bus.kapasitas << endl;
        P1 = alokasi(bus);
        insertFirst(L, P1);
        cout << "Data telah berhasil ditambahkan" << endl <<endl;
        break;
    }
    case 2 :
    {
        cout << "Masukkan data bus : "<<endl;
        cout << "ID Bus : ";
        cin >> bus.id << endl;;
        cout << "Brand Bus : ";
        cin >> bus.brand<<endl;
        cout << "Tipe Bus : ";
        cin >> bus.type << endl;
        cout << "Plat Bus : ";
        cin >> bus.plat<<endl;
        cout << "Kapasitas Bus : ";
        cin >> bus.kapasitas << endl;
        cout << "Masukkan setelah ID Bus : ";
        cin >> busprec<< endl;
        P2 = findElm(busprec);
        P1 = alokasi(bus);
        insertAfter(P2,P1);
        cout << "Data telah berhasil ditambahkan" << endl <<endl;
        break;
    }
    case 3 :
    {
        cout << "Masukkan data bus : "<<endl;
        cout << "ID Bus : ";
        cin >> bus.id << endl;;
        cout << "Brand Bus : ";
        cin >> bus.brand<<endl;
        cout << "Tipe Bus : ";
        cin >> "bus.type" << endl;
        cout << "Plat Bus : ";
        cin >> bus.plat<<endl;
        cout << "Kapasitas Bus : ";
        cin >> bus.kapasitas << endl;
        P1 = alokasi (bus);
        insertLast(L, P1);
        cout << "Data telah berhasil ditambahkan" << endl <<endl;
    }
    case 4 :
        {
            deleteFirst(L,P);
            cout << "Data telah berhasil dihapus" << endl <<endl;
        }
    case 5 :
        {
        cout << "Masukkan data yang ingin dihapus : ";
        cin >> bus;
        P2 = findElm(bus);
        P1 = alokasi(bus);
        deleteAfter(P1,P2);
        cout << "Data telah berhasil ditambahkan" << endl <<endl;
        }
    case 6 :
        {
            deleteLast(L,P);
            cout << "Data telah berhasil dihapus" << endl <<endl;
        }
    case 7 :
        {
            printInfo(L);
            cout << endl << endl;
        }
    case 8 :
        {
            insertionSort(L);
        }
    case 9 :
        {
            P1 = sentinelSearch(L, x);
            cout << info(P1) << endl;
        }
    case 0 :
        {
        }
    }
    }
}
