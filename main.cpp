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

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
