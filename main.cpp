#include <iostream>

using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    int semester;
};

struct elmlist {
    mahasiswa info;
    elmlist* next;
};

typedef elmlist* address;

struct list{
    address first;
};

void createList(list &L){
    L.first = nullptr;
}

address alokasi(mahasiswa M){
    address p = new elmlist;
    p->info = M;
    p->next = nullptr;
    return p;
}

void insertFirst (list &L, address p){
    if(L.first = nullptr){
        L.first = p;
    }else{
        p->next = L.first;
        L.first = p;
    }
}

int main()
{
    list L;
    createList(L);

    mahasiswa m1 = {"Jajang", "101240", 4};
    mahasiswa m2 = {"Udin", "101241", 1};
    mahasiswa m3 = {"Ida", "101242", 3};

    address p1 = alokasi(m1);
    insertFirst(L, p1);

    address p2 = alokasi(m2);
    insertFirst(L, p2);

    address p3=alokasi(m3);
    insertFirst(L,p3);

    return 0;
}
