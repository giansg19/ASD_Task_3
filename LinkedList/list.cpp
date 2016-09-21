#include "list.h"

void createList(List &L) {
    void createList(List &L) {
    l.first = nil;
    // NIM : 1301154533

}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 


    //----------------------------------------
    return P;
}

void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM : 

	
    //----------------------------------------
}

void insertFirst(List &L, address P) 
{
    if(l.first == nil)
    {
        l.first=p;
    }
    else
    {
        p->next = l.first;
        l.first = p;
    }
}
    // NIM : 1301154533
}

void insertLast(List &L, address P) {
	adr q;
    if (l.first == nil)
    {
        l.first = p;
    } else
    {
        q = l.first;
        while(next(q)!= nil)
        {
            q = next(q);
        }
        next(q) = p;
    }
    // NIM : 1301154533
}


address findElm(List L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P;
    //-------------your code here-------------
    // NIM : 
    
	
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 

	
	
    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 

	

    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM : 

	
    //----------------------------------------
}


void insertAfter(address Prec, address P) {
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    //-------------your code here-------------
    // NIM : 

	
    //----------------------------------------

}
void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 
    
	
    //----------------------------------------
}

