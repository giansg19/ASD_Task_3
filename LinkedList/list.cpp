#include "list.h"

void createList(List &L) {
     // NIM : 1301154533
    first(l) = nil;

}

address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P;
    //-------------your code here-------------
    // NIM : 1301154667
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    //----------------------------------------
    return P;
}

void dealokasi(address &P)
{
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */

    // NIM : 1301154169

    delete(p);
}

void insertFirst(List &L, address P) {
    // NIM : 1301154533
    if(first(l) == nil)
    {
        first(l)=p;
    }
    else
    {
        next(p) = first(l);
        first(l) = p;
    }
}

void insertLast(List &L, address P) {
     // NIM : 1301154533
    adr q;
    if (first(l) == nil)
    {
        first(l) = p;
    } else
    {
        q = first(l);
        while(next(q)!= nil)
        {
            q = next(q);
        }
        next(q) = p;
    }
}

address findElm(List L, infotype x)
{
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    // NIM : 1301154169
    address P;
    if (L.first != nil)
    {
        P = L.first;
        while ((info(P) != x) && (next(P) != nil))
        {
            P = next (P);
            if(info(P) == x)
            {
                return P;
            }
            else
            {
                return nil;
            }
        }
    }

    return P;
}


void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154667
    if (first(L) != NULL){
        P = first(L);
        if (next(P) == NULL){
            first(L) = NULL;
        } else{
            first(L) = next(P);
            next(P) = NULL;
        }
    }

    //----------------------------------------
}

void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM : 1301154667
    if(first(L) != NULL){
        address Q = first(L);
        if(Q->next == NULL){
            first(L) = NULL;
        }else{
            while ((Q->next)->next != NULL){
                Q = Q->next;
            }
            P = Q->next;
            Q->next=NULL;
            }
    }


	

    //----------------------------------------
}

void printInfo(List L)
{
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    // NIM : 1301154169

    if (L.first != nil)
    {
        address P = L.first;
        if (P->next == nil)
        {
            cout<< info(P)<<" ";
        }
        else
        {
            while (P != nil)
            {
                cout << info(P)<<" ";
                P = next (P);
            }

            cout << endl;
        }
    }
    else
    {
        cout << "List Kosong"<<endl;
    }


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

