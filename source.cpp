/*
COMP 150 Final Project
Name: Anmolpreet Singh Basi
Student Number: 300196499
December 4, 2022
*/



#include <iostream>
#include <string>
#include "player.h"
#include<fstream>

using namespace std;
int skillcanada,skillamerica,skillrussia,skillportu;

struct Canada{
    int skill_Level;
    int aggression;
};
struct America{
    int skill_Level;
    int aggression;
};
struct Russia{
    int skill_Level;
    int aggression;
};
struct Portugal{
    int skill_Level;
    int aggression;
};
        int rus,cas,ams,pos;
        int count_ru=0;
        int count_ca=0;
        int count_am=0;
        int count_po=0;
        int teama=0, teamb=0;
        string scores[4]={ };
    int scoreup(int a, int b){
        a = a+b;
        return a;
    }

int main(){

    cout<<"  ___  ___   ___ ___ ___ _ __ "<<endl;
    cout<<" / __|/ _ \\ / __/ __/ _ \\ '__|"<<endl;
    cout<<" \\__ \\ (_) | (_| (_|  __/ |   "<<endl;
    cout<<" |___/\\___/ \\___\\___\\___|_|   "<<endl;
    cout<<"football - FA - FIFA - footballer - UEFA - World Cup"<<endl;
    cout<<"---------Welcome to the Fifa 2022 simulation.---------"<<endl<<endl<<endl;
    cout<<"Enter 1 for match or 2 for shootout.";
    int mog;
    cin>>mog;
    if(mog==1){

        cout<<"Enter the skill level for team Canada: ";
        cin>>skillcanada;
        cout<<endl;
        cout<<"Enter the skill level for team America: ";
        cin>>skillamerica;
        cout<<endl;
        cout<<"Enter the skill level for team Russia: ";
        cin>>skillrussia;
        cout<<endl;
        cout<<"Enter the skill level for team Portugal: ";
        cin>>skillportu;
        cout<<endl;
        cout<<endl;
        cout<<endl;
    
    Portugal ronaldo;
    Portugal bruno;
    Portugal john;
    Canada alphonos;
    Canada jonathan;
    Canada stephen;
    America pulisic;
    America weston;
    America artem;
    Russia golovin;
    Russia stephard;
    Russia miranchuk;
    
        cout<<"Select the skill level of portugal Players."<<endl;
        cout<<"Enter Player's skill level for Ronaldo from 1 to 5: ";
        cin>>ronaldo.skill_Level;
        cout<<"Enter Player's skill level for John Brook from 1 to 5: ";
        cin>>john.skill_Level;
        cout<<"Enter Player's skill level for Bruno from 1 to 5: ";
        cin>>bruno.skill_Level;;
        cout<<endl;


        cout<<"Select the Aggression level of portugal Players."<<endl;
        cout<<"Enter Player's Aggression level for Ronaldo from 1 to 5: ";
        cin>>ronaldo.aggression;
        cout<<"Enter Player's Aggression level for John Brook from 1 to 5: ";
        cin>>john.aggression;
        cout<<"Enter Player's Aggression level for Bruno from 1 to 5: ";
        cin>>bruno.aggression;;
        cout<<endl;

        
        cout<<"Select the Skill level of canada Players."<<endl;
        cout<<"Enter Player's Skill level for Alphonso Davies from 1 to 5: ";
        cin>>alphonos.skill_Level;
        cout<<"Enter Player's Skill level for Stephen Eustáquio from 1 to 5: ";
        cin>>stephen.skill_Level;
        cout<<"Enter Player's Skill level for Jonathan David from 1 to 5: ";
        cin>>jonathan.skill_Level;
        cout<<endl;
        
        cout<<"Select the Aggression level of canada Players."<<endl;
        cout<<"Enter Player's Aggression level for Alphonso Davies from 1 to 5: ";
        cin>>alphonos.aggression;
        cout<<"Enter Player's Aggression level for Stephen Eustáquio from 1 to 5: ";
        cin>>stephen.aggression;
        cout<<"Enter Player's Aggression level for Jonathan David from 1 to 5: ";
        cin>>jonathan.aggression;
        cout<<endl;
        
        cout<<"Select the Skill level of America Players."<<endl;
        cout<<"Enter Player's Skill level for C. Pulisic from 1 to 5: ";
        cin>>pulisic.skill_Level;
        cout<<"Enter Player's Skill level for Artem Dzyuba from 1 to 5: ";
        cin>>artem.skill_Level;
        cout<<"Enter Player's Skill level for Weston McKennie from 1 to 5: ";
        cin>>weston.skill_Level;
        cout<<endl;

        cout<<"Select the Aggression level of America Players."<<endl;
        cout<<"Enter Player's Aggression level for C. Pulisic from 1 to 5: ";
        cin>>pulisic.aggression;
        cout<<"Enter Player's Aggression level for Artem Dzyuba from 1 to 5: ";
        cin>>artem.aggression;
        cout<<"Enter Player's Aggression level for Weston McKennie from 1 to 5: ";
        cin>>weston.aggression;
        cout<<endl;
        
        
        cout<<"Select the Skill level of Russia Players."<<endl;
        cout<<"Enter Player's Skill level for Stephard from 1 to 5: ";
        cin>>stephard.skill_Level;
        cout<<"Enter Player's Skill level for A. Golovin from 1 to 5: ";
        cin>>golovin.skill_Level;
        cout<<"Enter Player's Skill level for 	A. Miranchuk from 1 to 5: ";
        cin>>miranchuk.skill_Level;
        cout<<endl;

        cout<<"Select the Aggression level of Russia Players."<<endl;
        cout<<"Enter Player's Aggression level for A. Golovin from 1 to 5: ";
        cin>>golovin.aggression;
        cout<<"Enter Player's Aggression level for Stephard from 1 to 5: ";
        cin>>stephard.aggression;
        cout<<"Enter Player's Aggression level for 	A. Miranchuk from 1 to 5: ";
        cin>>miranchuk.aggression;
        cout<<endl;

        cout<<"Welcome to Semi Finals.\n ------The teams competing are as follows--------"<<endl;
        cout<<"1. Canada"<<endl;
        cout<<"2. America"<<endl;
        cout<<"3. Portugal"<<endl;
        cout<<"4. Russia"<<endl;

        cout<<"--------------TEAM MEMBER PERFORMANCE REPORT--------------"<<endl;

        string players_Canada[] = {"Alphonso Davies", "Jonathan David", "Stephen Eustáquio"};
        string players_America[] = {"C. Pulisic", "Artem Dzyubad", "Weston McKennie"};
        string players_Russia[] = {"A. Golovin", "Stephard", "A. Miranchuk"};
        string players_Portugal[] = {"Ronaldo", "John Brook", "Bruno"};

        int endurance_Canada[]= {1,4,2};
        int endurance_America[]= {2,3,1};
        int endurance_Russia[]= {1,3,4};
        int endurance_Portugal[]= {3,4,1};
        
        int concentration_Canada[]= {10,2,3};
        int concentration_America[]= {3,6,7};
        int concentration_Russia[]= {7,6,8};
        int concentration_Portugal[]= {6,7,4};
    
        int tackle_Canada[]= {7,5,6};
        int tackle_America[]= {3,8,4};
        int tackle_Russia[]= {8,9,3};
        int tackle_Portugal[]= {5,7,3};


        int performance_canada[] = {};
        int performance_America[] = {};
        int performance_Russia[] = {};
        int performance_Portugal[] = {};
        int ca=0, am=0, ru=0, po=0;
        for(int i=0;i<3;i++){
            performance_canada[i] = endurance_Canada[i]*2 + concentration_Canada[i] + endurance_Russia[i]+skillcanada*4;
            performance_America[i] = endurance_America[i]*2 + concentration_America[i] + endurance_America[i]+skillamerica*4;
            performance_Russia[i] = endurance_Russia[i]*2 + concentration_Russia[i] + endurance_Russia[i]+skillrussia*4;
            performance_Portugal[i] = endurance_Portugal[i]*2 + concentration_Portugal[i] + endurance_Portugal[i]+skillportu*4;
        }
        for(int i=0; i<3;i++){
            ca = performance_canada[i] +ca;
            am = performance_America[i] +am;
            ru = performance_Russia[i] +ru;
            po = performance_Portugal[i] +po;
        }
        

        cout<<"--------Team Canada Performance---------"<<endl;
            cout<<" S.No  Name           Endurance         Concentration          Tackle        Performance"<<endl;
            for(int i = 0; i<3; i++){
                cout<< i+1<<"      "<<players_Canada[i]<<"       "<<endurance_Canada[i]<<"                "<<concentration_Canada[i]<<"                     "<<tackle_Canada[i]<<"             " <<performance_canada[i]<<endl;
            }
        cout<<"--------Team America Performance---------"<<endl;
            cout<<" S.No  Name           Endurance         Concentration          Tackle       Performance"<<endl;
            for(int i = 0; i<3; i++){
                cout<< i+1<<"      "<<players_America[i]<<"         "<<endurance_America[i]<<"                   "<<concentration_America[i]<<"                "<<tackle_America[i]<<"             " <<performance_America[i]<<endl;
            }
        cout<<"--------Team Russia Performance---------"<<endl;
            cout<<" S.No  Name           Endurance         Concentration          Tackle       Performance"<<endl;
            for(int i = 0; i<3; i++){
                cout<< i+1<<"      "<<players_Russia[i]<<"       "<<endurance_Russia[i]<<"                    "<<concentration_Russia[i]<<"                     "<<tackle_Russia[i]<<"             " <<performance_Russia[i]<<endl;
            }
        cout<<"--------Team Portugal Performance---------"<<endl;
            cout<<" S.No  Name           Endurance         Concentration          Tackle       Performance"<<endl;
            for(int i = 0; i<3; i++){
                cout<< i+1<<"      "<<players_Portugal[i]<<"       "<<endurance_Portugal[i]<<"                    "<<concentration_Portugal[i]<<"                     "<<tackle_Portugal[i]<<"             " <<performance_Portugal[i]<<endl;
            }

        cout<<"------------First Semi Final------------"<<endl;
        cout<<"Match between Team America and Team Russia"<<endl;
        cout<<"Teams are ready press s to start the game: "<<endl;
        string enter;
        cin>>enter;
        
        
        if(enter=="s"){
            cout<<"Team America started the match and has the ball."<<endl;
            cout<<"                                          Attacking.";
            
            
            while(am<100){
                cout<<"Team America has the ball."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"America made a GOAL."<<endl;
                am= am + 4;
                count_am++;
            }
            ams=count_am;
            
            while(ru<100){
                cout<<"Team Russia has the ball."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"Russia made a GOAL."<<endl;
                ru= ru + 4;
                count_ru++;
            }
            rus = count_ru;
            
            cout<<"Team America has "<<count_am<<" goals and Team Russia has "<<count_ru<<" goals"<<endl;
            if(count_am>count_ru){
                cout<<"Team America moved to Finals."<<endl;
                scores[0]="America";
            }
            else if(count_am<count_ru){
                cout<<"Team Russia moved to Finals."<<endl;
                scores[0]="Russia";
            }
        }
    
        cout<<"------------Second Semi Final------------"<<endl;
        cout<<"Match between Team Portugal and Team Canada"<<endl;
        cout<<"Teams are ready press s to start the game: "<<endl;
        string enterb;
        cin>>enterb;
        if(enter=="s"){
            cout<<"Team Portugal started the match and has the ball."<<endl;
            cout<<"                                          Attacking.";
            
            while(ca<100){
                cout<<"Team Canada has the ball."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"Canada made a GOAL."<<endl;
                ca= ca + 4;
                count_ca++;
            }
            cas=count_ca;
            
            while(po<100){
                cout<<"Team Portugal has the ball."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"Portugal made a GOAL."<<endl;
                po= po + 4;
                count_po++;
            }
            pos=count_po;
            
            cout<<"Team Canada has "<<count_ca<<" goals and Team Portugal has "<<count_po<<" goals"<<endl;
            if(count_ca>count_po){
                cout<<"Team Canada moved to Finals."<<endl;
                scores[1]="Canada";
            }
            else if(count_ca<count_po){
                cout<<"Team Portugal moved to Finals."<<endl;
                scores[1]="Portugal";
            }
        }
    
    
        cout<<endl<<endl<<endl;
        cout<<"--------The Final Match--------"<<endl;


        cout<<"Final Match is between "<<scores[0]<<" and "<<scores[1]<<"."<<endl;
        cout<<"Teams are ready press s to start the game: "<<endl;
        string inpp;
        cin>>inpp;
        
        if(inpp=="s"){
        cout<<"Teams started the match and has the ball."<<endl;
            cout<<"                                          Attacking.";
            
            while(ca<140){
                cout<<"Team "<<scores[0]<< " has the ball."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<scores[0]<< "made a GOAL."<<endl;
                ca= ca + 4;
                teama++;
            }
            if(scores[0]=="Canada"){
                count_ca =count_ca+ teama;
            }
            else if(scores[0]=="America"){
                count_am =count_am+ teama;
            }
            else if(scores[0]=="Russia"){
                count_ru =count_ru+ teama;
            }
            else if(scores[0]=="Portugal"){
                count_po =count_po+ teama;
            }
            
            
            while(am<140){
                cout<<"Team "<<scores[1]<<" has the ball."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<"                                         Attacking."<<endl;
                cout<<scores[1]<<" made a GOAL."<<endl;
                am= am + 4;
                teamb++;
            }
            if(scores[1]=="Canada"){
                count_ca =count_ca+ teamb;
            }
            else if(scores[1]=="America"){
                count_am =count_am+ teamb;
            }
            else if(scores[1]=="Russia"){
                count_ru =count_ru+ teamb;
            }
            else if(scores[1]=="Portugal"){
                count_po =count_po+ teamb;
            }
            
            if(teama>teamb){
                cout<<scores[0]<<" won the game."<<endl;
            }
            else{
                cout<<scores[1]<<" won the game."<<endl;
            }  
        
        }
    }
    else if(mog==2){
        cout<<"-----------------------Wecome to the shooting Game---------------------"<<endl<<endl;
        cout<<"You will be shooting 4 times."<<endl;
        int goals=0;
        for(int i=0;i<4;i++){
            cout<<"Where do you want to shoot, Select 1, 2 or 3.";
            int shooter = (rand() % 3) + 1;
            cout<<"                     ___"<<endl;
            cout<<" o__        o__     |   |\\"<<endl;
            cout<<"/|          /\\      |   |X\\"<<endl;
            cout<<"/ > o        <\\     |   |XX\\"<<endl;
            cout<<endl;
            int option;
            cin>>option;
            if(option==shooter){
                cout<<"You missed the shot, the goalkeeper stopped the ball."<<endl;
            }
            else{
                cout<<"Nice shot! you made a goal."<<endl;
                goals++;
            }
        }
        cout<<"You made "<<goals<<" goals. It was a nice shootout."<<endl;
    }
    cout<<"Press any key to exit.";
    int inpu;
    cin>>inpu;









    ofstream myFile;
    myFile.open("wcResults.txt");
    myFile<<"Welcome to Fifa World Cup."<<endl;
    myFile<<"Teams in Semi Final are:\n1. Canada\n2. America\n3.Portugal\n4.Russia.\n\n";
    myFile<<"--------------First Semi Final--------------"<<endl<<endl;
    myFile<<"Match between America and Russia."<<endl;
    myFile<<"America = "<<ams<<endl;
    myFile<<"Russia = "<<rus<<endl<<endl<<endl;
    myFile<<"--------------Second Semi Final--------------"<<endl<<endl;
    myFile<<"Match between Portugal and Canada."<<endl;
    myFile<<"Portugal = "<<pos<<endl;
    myFile<<"Canada = "<<cas<<endl<<endl<<endl;
    myFile<<"--------------The Final--------------"<<endl<<endl;
    myFile<<"Match between "<<scores[0]<<" and "<<scores[1]<<".";
    myFile<<"Team "<<scores[0]<<" has "<<teama <<" goals.";
    myFile<<"Team "<<scores[1]<<" has "<<teamb <<" goals.";
    if(teama>teamb){
                myFile<<scores[0]<<" won the game."<<endl;
            }
            else{
                myFile<<scores[1]<<" won the game."<<endl;
            }
    myFile<<endl<<endl;
    myFile<<"S.No    Team Name    Total Goals"<<endl;
    myFile<<"1.       Canada          "<<count_ca<<endl;
    myFile<<"2.       America         "<<count_am<<endl;
    myFile<<"3.       Russia          "<<count_ru<<endl;
    myFile<<"4.       Portugal        "<<count_po<<endl;
    myFile<<endl<<endl;
    myFile<<"----------Thank you for playing, you may restart the game to play again.------------";

return 0;
}
