#include "CSLL.h"

int main()
{
    List L;
    adr p;
    int x;
    int input, n, inputan;
    int nomordata = 0;
    create_list(L);
    while (true)
    {
        cout << "#CIRCULAR SINGLE LINKED LIST#" << endl;
        cout << "=========== MENU ============" << endl;
        cout << "1. Menambah N data baru" << endl;
        cout << "2. Menampilkan semua data" << endl;
        cout << "3. Menghapus satu data" << endl;
        cout << "4. Menghapus semua data" << endl;
        cout << "0. Exit" << endl;
        cout << "Pilihan menu: ";
        cin >> input;
        if (input == 1)
        {
            cout << "Masukkan total data yang ingin ditambah: ";
            cin >> n;
            while (n > 0)
            {
                nomordata = nomordata + 1;
                cout << "Masukkan data ke " << "[" << nomordata << "]" << endl;
                cout << "Masukkan Angka: ";
                cin >> x;
                p = create_new_elm(x);
                cout << "Pilih posisi pada List" << endl;
                cout << "1. Insert First" << endl;
                cout << "2. Insert Last" << endl;
                cout << "3. Insert After" << endl;
                cout << "4. Insert Ascending (jangan pake yg lain)" << endl;
                cout << "Masukkan Pilihan: ";
                cin >> inputan;
                if (inputan == 1)
                {
                    insert_first(L, p);
                }
                else if (inputan == 2)
                {
                    insert_last(L, p);
                }
                else if (inputan == 3)
                {
                    cout << "Masukkan data yang setelahnya mau disisipkan" << endl;
                    cout << "Masukkan Angka: ";
                    cin >> x;
                    insert_after(cari_data(L, x), p);
                }
                else if (inputan == 4)
                {
                    insert_ascending(L, p);
                }
                n = n - 1;
            }
        }
        else if (input == 2)
        {
            print(L);
        }
        else if (input == 3)
        {
            cout << "Pilih posisi data yang mau dihapus" << endl;
            cout << "1. Delete First" << endl;
            cout << "2. Delete Last" << endl;
            cout << "3. Delete After" << endl;
            cout << "Masukkan Pilihan: ";
            cin >> inputan;
            if (inputan == 1)
            {
                nomordata--;
                delete_first(L);
            }
            else if (inputan == 2)
            {
                nomordata--;
                delete_last(L);
            }
            else if (inputan == 3)
            {
                cout << "Masukkan data yang setelahnya mau dihapus" << endl;
                cout << "Masukkan angka: ";
                cin >> x;
                nomordata--;
                delete_after(cari_data(L, x));
            }
        }
        else if (input == 4)
        {
            nomordata = 0;
            delete_all_element(L);
        }
        else if (input == 0)
        {
            cout << "Program Berhenti" << endl;
            break;
        }
    }
}
