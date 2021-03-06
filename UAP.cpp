#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;

struct Antrian {
  int antri1 = 1, antri2 = 1;
  queue<int> que;
  queue<int> quu;
  
  void tambah(int no){
    if(no == 1){
      cout << "|========================================|" << endl;
      cout << "|           NO. ANTREAN : " << antri1 << "             |" << endl;
      cout << "|========================================|" << endl;
      cout << "|           Silahkan Menunggu            |" << endl;
      cout << "|========================================|" << endl;
      que.push(antri1);
      antri1++;
    }
    else if(no == 2){
      cout << "|========================================|" << endl;
      cout << "|           NO. ANTREAN : " << antri2 << "             |" << endl;
      cout << "|========================================|" << endl;
      cout << "|           Silahkan Menunggu            |" << endl;
      cout << "|========================================|" << endl;
      que.push(antri2);
      antri2++;
    }
  }
  
  void panggil(int no){
    if (!que.empty() && no == 1){
      cout << "|========================================|" << endl;
      cout << "|             No. Antrean " << que.front() <<  "              |" << endl;
      cout << "|        Dimohon menuju loket " << no << "          |" << endl;
      cout << "|========================================|" << endl;
      que.pop();
    }
    else if(!quu.empty() && no == 2){
      cout << "|========================================|" << endl;
      cout << "|             No. Antrean " << quu.front() <<  "              |" << endl;
      cout << "|        Dimohon menuju loket " << no << "          |" << endl;
      cout << "|========================================|" << endl;
      quu.pop();
    }
    else {
      cout << "|========================================|" << endl;
      cout << "|           Tidak ada Antrean            |" << endl;
      cout << "|========================================|" << endl;
    }
  }
  
  void print(queue<int> qu, int no){
    queue<int> q = qu;
    queue<int> e = qu;

    if(!q.empty()){
      while(!q.empty()){
        cout << "|========================================|" << endl;
        cout << "|    No. Antri : " << q.front() << "                      |" << endl;
        q.pop();
      }
      cout << "|========================================|" << endl;
    }
    else if(!e.empty()){
      while(!e.empty()){
        cout << "|========================================|" << endl;
        cout << "|    No. Antri : " << e.front() << "                      |" << endl;
        e.pop();
      }
      cout << "|========================================|" << endl;
    }
    else {
            cout << "|========================================|" << endl;
            cout << "|             Antrean kosong             |" << endl;
            cout << "|========================================|" << endl;
        }
    }

    void menu(){
        cout << "|=========================================|" << endl;
        cout << "|  Selamat datang di Bank East Indonesia  |" << endl;
        cout << "|=========================================|" << endl;
        cout << "|  1. Teller                              |" << endl;
        cout << "!  2. Customer Service                    |" << endl;
        cout << "|  3. Keluar                              |" << endl;
        cout << "|=========================================|" << endl;
    }

    void pilih(){
        cout << "|========================================|" << endl;
        cout << "|  1. Tambah antrean                     |" << endl;
        cout << "|  2. Panggil antrean                    |" << endl;
        cout << "!  3. Lihat antrean                      |" << endl;
        cout << "|  4. Keluar                             |" << endl;
        cout << "|========================================|" << endl;
    }

} antre;
   

int main(){
    int choose1, choose2, choose3;

    do {
        mulai1 :
        system("cls");
        antre.menu();
        cout << "\n\nMasukkan pilihan \n>> ";
        cin >> choose1;

        switch(choose1){
            case 1 :
                mulai2 :
                system("cls");
                antre.pilih();
                cout << "\n\nMasukkan pilihan \n>> ";
                cin >> choose2;
                switch(choose2){
                    case 1 :
                        system("cls");
                        antre.tambah(choose1);
                        getch();
                        goto mulai2;
                        break;
                    case 2 :
                        system("cls");
                        antre.panggil(choose1);
                        getch();
                        goto mulai2;
                        break;
                    case 3 :
                        system("cls");
                        antre.print(antre.que, choose1);
                        getch();
                        goto mulai2;
                        break;
                    case 4 :
                        goto mulai1;
                    default :
                        cout << "Maaf pilihan Anda tidak tersedia" << endl;
                        getch();
                        goto mulai1;
                        break;
                }
                break;
             case 2 :
                mulai3 :
                system("cls");
                antre.pilih();
                cout << "\n\nMasukkan pilihan \n>> ";
                cin >> choose3;
                switch(choose3){
                    case 1 :
                        system("cls");
                        antre.tambah(choose1);
                        getch();
                        goto mulai3;
                        break;
                    case 2 :
                        system("cls");
                        antre.panggil(choose1);
                        getch();
                        goto mulai3;
                        break;
                    case 3 :
                        system("cls");
                        antre.print(antre.quu, choose1);
                        getch();
                        goto mulai3;
                        break;
                    case 4 :
                        goto mulai1;
                    default :
                        cout << "Maaf pilihan Anda tidak tersedia" << endl;
                        getch();
                        goto mulai1;
                        break;
                }
                break;
            case 3 :
                cout << "Terima kasih telah menggunakan program kami :) " << endl;
                getch();
                system("cls");
                break;
            default :
                cout << "Maaf pilihan Anda tidak tersedia" << endl;
                getch();
                system("cls");
                break;
        }
    } while (choose1 != 3);
}
