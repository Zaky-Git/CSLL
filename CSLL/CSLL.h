#include <iostream>

using namespace std;

#define first(x) x.first
#define next(x) x->next
#define info(x) x->info

typedef struct elmList *adr;

struct elmList{
    int info;
    adr next;
};

struct List{
    adr first;
};

void create_list(List &l);
adr create_new_elm(int x);
void insert_ascending(List &l, adr p);
void insert_first(List &l, adr p);
void insert_last(List &l, adr p);
void insert_after(adr prev, adr p);
void delete_data(List &l, int x);
void delete_first(List &l);
void delete_last(List &l);
void delete_after(adr prec);
adr cari_data(List l, int x);
void delete_all_element(List &l);
void print(List l);
