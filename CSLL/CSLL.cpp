#include "CSLL.h"

void create_list(List &l){
    first(l) = NULL;
}

adr create_new_elm(int x){
    adr p = new elmList;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void insert_ascending(List &l, adr p){
    if (first(l) == NULL){
        first(l) = p;
        next(p) = p;
    } else {
        adr q = first(l);
        if(info(p) <= info(q)){
            insert_first(l,p);
        } else{
            while(next(q) != first(l)){
                if(info(p) <= info(next(q))){
                    insert_after(q, p);
                    return;
                }
                q = next(q);
            }
            insert_last(l, p);
        }
    }
}

void insert_first(List &l, adr p){
    if (first(l)== NULL){
        first(l) = p;
        next(first(l)) = first(l);
    } else {
        adr q = first(l);
        while (true){
            q = next(q);
            if (next(q) == first(l)){
                next(q)=p;
                next(p)=first(l);
                first(l) = p;
                break;
            }
        }
    }
}

void insert_last(List &l, adr p){
    if (first(l)== NULL){
        first(l) = p;
        next(first(l)) = first(l);
    } else {
        adr q = first(l);
        while (true){
            q = next(q);
            if (next(q) == first(l)){
                next(q)=p;
                next(p)=first(l);
                break;
            }
        }
    }
}
void insert_after(adr prev, adr p){
    next(p) = next(prev);
    next(prev) = p;
}
void delete_data(List &l, int x){
    adr p = first(l);
    if(x == info(p)){
        delete_first(l);
    } else {
        while(info(next(p)) != x && next(next(p)) != first(l)){
            p = next(p);
        }
        if(next(next(p)) != first(l)){
            delete_after(p);
        } else {
            if(info(next(p)) != x){
                cout << "Data tidak ditemukan" << endl;
            } else {
                delete_last(l);
            }
        }
    }
}
void delete_first(List &l){
    adr p = first(l);
    adr q = first(l);
    while(next(q) != first(l)){
        q = next(q);
    }
    next(q) = next(p);
    first(l) = next(p);
    next(p) = NULL;
}
void delete_last(List &l){
    adr q = first(l);
    while(next(next(q)) != first(l)){
        q = next(q);
    }
    next(next(q)) = NULL;
    next(q) = first(l);
}
void delete_after(adr prec){
    adr p = next(prec);
    next(prec) = next(p);
    next(p) = NULL;
}

void delete_all_element(List &l){
    l.first->next = NULL;
    l.first = NULL;
}

void print(List l){
    adr p = first(l);
    if (first(l) == NULL){
        cout << "List Kosong" << endl;
        cout << endl;
    } else {
            do {
        cout << info(p) << " ";
        p = next(p);
    } while(p != first(l));
    cout << endl << endl;
    }
}

adr cari_data(List l, int x){
    adr p;
    p = first(l);
    while (true){
            if (info(p) == x){
            return p;
        }
        p = next(p);
        if (p == first(l)){
            break;
        }
    }
}









