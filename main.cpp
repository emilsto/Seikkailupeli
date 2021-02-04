#include <iostream>
#include <string>



//Some structs to hold data
struct playerInfo { //player info, stats
    std::string playerName;
    int playerClass, HP, BaseReach, BaseDamage, playerSpec;

};


struct inventPlayer{ //player inventory
    int HealthPot, StaminaPot, AttackPot;
};


//Functions
void TopMenu();
void getPlayerInfo(playerInfo *p, int playerID);

int main() {

    struct playerInfo player1;


    std::cout << "Tervetuloa SEIKKAULUPELIIN!\n";

    getPlayerInfo(&player1, 1); //initial setup, choose class and set your spec
    TopMenu(); //top menu, tutorial




    return EXIT_SUCCESS;
}


void getPlayerInfo(playerInfo *p, int playerID){

    std::cout << "\n\n\nPelaaja "<<playerID<<", Aloitetaan syöttämällä nimesi: ";
    std::cin>>p->playerName;

    std::cout << "Valitse hahmoluokkasi (1=Soturi, 2=Velho): ";
    std::cin>>p->playerClass;

    if (p->playerClass == 1){
        p->BaseReach = 1;
        p->BaseDamage = 10;



        std::cout<<"Soturin pohjastatist ovat: \n";
        std::cout<<"Elinvoima: "<<p->HP<<std::endl;
        std::cout<<"Reach: "<<p->BaseReach<<std::endl;
        std::cout<<"Damage: "<<p->BaseDamage<<std::endl;

        std::cout<<"Valitse erikoistumisesi (1=Pers'Erkki = -10 elinvoima, +2 reach, +5 damage, 2=Tankki = +50 elinvoima, +0 reach, -2 damage, 3=Taistelija = +10 elinvoima, +1 reach, + 2 damage): ";
            std::cin>>p->playerSpec;

            if  (p->playerSpec == 1){
                p->HP = p->HP -10;
                p->BaseReach = p->BaseReach + 2;
                p->BaseDamage = p->BaseDamage + 5;
            }
                else if  (p->playerSpec == 2){
                 p->HP = p->HP +50;
                 p->BaseDamage = p->BaseDamage - 2;
         }
            else{
                p->HP = p->HP +10;
                p->BaseReach = p->BaseReach + 1;
                p->BaseDamage = p->BaseDamage + 2;
            }
    }

    else {
        p->BaseReach = 5;
        p->BaseDamage = 20;
        p->HP = p->HP -10;

        std::cout<<"Velhon pohjastatist ovat: \n";
        std::cout<<"Elinvoima: "<<p->HP<<std::endl;
        std::cout<<"Reach: "<<p->BaseReach<<std::endl;
        std::cout<<"Damage: "<<p->BaseDamage<<std::endl;

        std::cout<<"Valitse erikoistumisesi (1=Mustavelho = -30 elinvoima, +2 reach, +5 damage, 2=Punavelho = +0 elinvoima, +0 reach, +0 damage, 3=Sinivelho = +10 elinvoima, +1 reach, - 10 damage): ";
        std::cin>>p->playerSpec;

        if  (p->playerSpec == 1){
            p->HP = p->HP -10;
            p->BaseReach = p->BaseReach + 2;
            p->BaseDamage = p->BaseDamage + 5;
        }
        else if  (p->playerSpec == 2){
            p->HP = p->HP +50;
            p->BaseDamage = p->BaseDamage - 2;
        }
        else{
            p->HP = p->HP +10;
            p->BaseReach = p->BaseReach + 1;
            p->BaseDamage = p->BaseDamage + 2;
        }
    }
};


void TopMenu(){

    std::cout<<"PÄÄVALIKKO: \n\n";

    std::cout<<"TUOTORIAL 1: \n";




};
