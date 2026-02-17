#ifndef LAB21_H
#define LAB21_H

#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

class Unit{
    string name;
    string type;        
    int hp;
    int hpmax;
    int atk;
    int def;
    bool guard_on;        
public:            
    void create(string);
    void showStatus();
    void newTurn();
    int attack(Unit &);
    int beAttacked(int);
    int heal();    
    void guard();
    bool isDead();    
};

void drawScene(char p_action,int p,char m_action,int m);
void playerWin();
void playerLose();

#endif
