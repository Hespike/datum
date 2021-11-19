class Datum {
private:
   int ev;
   int honap;
   int nap;

public:
   int get_ev(){
       return ev;
}

void set_ev(int uj_ev) {
   ev = uj_ev;
}

public:
   int get_honap(){
       return honap;
   }

   void set_honap(int uj_honap) {
       honap = uj_honap;
   }

public:
   int get_nap(){
       return nap;
   }

   void set_nap(int uj_nap) {
       ev = uj_nap;
   }

};
/*
class Datum {
private:
   int ev;
   int honap;
   int nap;

public:
   int get_ev() {
       return ev;
   }

   int get_honap() {
       return honap;
   }

   int get_nap() {
       return nap;
   }
};
*/
