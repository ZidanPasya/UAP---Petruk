#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;

struct Antrian {
  int antri1 = 1, antri2 = 1;
  queue<int> que;
  queue<int> quu;
  
  void tambah(){
    if(no == 1){
      cout << "|========================================|" << endl;
      cout << "|           NO. ANTREAN : " << antri1 << "             |" << endl;
      cout << "|========================================|" << endl;
      cout << "|          Silahkan Menunggu             |" << endl;
      cout << "|========================================|" << endl;
      que.push(antri1);
      antri1++;
    }
    else if(no == 2){
      cout << "|========================================|" << endl;
      cout << "|           NO. ANTREAN : " << antri2 << "             |" << endl;
      cout << "|========================================|" << endl;
      cout << "|          Silahkan Menunggu             |" << endl;
      cout << "|========================================|" << endl;
      quu.push(antri2);
      antri2++;
    }
  }
  
  void panggil(){
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
  }
};
