#include<iostream>

using namespace std;

class Komputer{
    public:
        string marka, model;
};

class KomputerPC : public Komputer{
    public:
        string rodzajObudowy; 
};

class Laptop: public Komputer{
    public:
        string kolorObudowy;
        float przekatnaEkranu;

        void inputData(){
            cin>>marka;
            cin>>model;
            cin>>kolorObudowy;
            cin>>przekatnaEkranu;
            cout<<"Marka: "<<marka
                <<"\nModel: "<<model
                <<"\nKolor obudowy: "<<kolorObudowy
                <<"\nPrzekatna ekranu: "<<przekatnaEkranu<<endl;
        };
};

int main(){
    cout<<"Test\n";
    Laptop l;
    l.inputData();

}