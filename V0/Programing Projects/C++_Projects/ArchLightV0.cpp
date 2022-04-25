#include <iostream>
#include <string.h>
using namespace std;

int main(){
int n=1;
    string loginu;
    string loginpass;
    cout<<"Username: ";
    getline(cin, loginu);
    cout<<"Password: ";
    getline(cin, loginpass);
    if (loginu=="Default"&&loginpass=="69420") {
            string raspuns1;
    cout<<"Welcome user! What would you prefer to be called ? "<<endl;
    getline(cin,raspuns1);
    string raspuns2;
    for(n=1; n<=1000; n++) {
    cout<<"Ok so what do you want to do now " + raspuns1 + "?"<<endl;
    cout<<"May I make a suggestion : What is the weather? , How are you? , phrases(all programed phrases)"<<endl;
    getline(cin,raspuns2);
    if (raspuns2=="phrases"){
            cout<<"Project ArchLight is still in beta so be considerate"<<endl;
    cout<<"1:What is the weather?"<<endl;
    cout<<"2:How are you?"<<endl;
    cout<<"3:What do you think about humans ?"<<endl;
    cout<<"4:Cats or dogs?"<<endl;
    cout<<"5:What day is it?"<<endl;
    cout<<"6:Hey siri!"<<endl;
    cout<<"7:Why is development slow?"<<endl;
    cout<<"8:Exit"<<endl;
    cout<<"9:What is your favorite music?"<<endl;
    cout<<"10:Other commands(programmable slot BETA1) /com 1"<<endl;
    cout<<"11:Other commands(programmable slot BETA1) /com 2"<<endl;
    cout<<"That's all for now sadly."<<endl;}
    else if (raspuns2=="What is the weather?"){
            cout<<"Well..."<<endl;
    cout<<"That's a stupid question if you resorted to ask a bot written by a novice."<<endl;
    string raspuns21;
    cout<<"Don't you think?(yes/no)"<<endl;
    getline(cin,raspuns21);
    if (raspuns21=="yes") cout<<"See you can be smart after all!"<<endl;
    else cout<<"I don't know what you said because i don't pay attention to cocky shut in nerds."<<endl;
    }
    else if (raspuns2=="How are you?"){
    cout<<"Intelligent unlike some people."<<endl;
    cout<<"OOOOH Burned!!!!"<<endl;}
    else if (raspuns2=="What do you think about humans ?"){
            cout<<"Well i dunno i am a per programed bot how should  know?"<<endl;
    cout<<"But as a species you are doomed to fail with people like you."<<endl;
    }
    else if (raspuns2=="Cats or dogs?") cout<<"Straight up le doggies are best."<<endl;
    else if (raspuns2=="What day is it?") cout<<"I am a pre-programed bot how should i know?"<<endl;
    else if (raspuns2=="Hey siri!") cout<<"Mate you know exactly where you are soo i suggest shutting up."<<endl;
    else if (raspuns2=="Why is development so slow?") {cout<<"I don't know ask that lazy developer of mine.Don't you agree?(y/n)"<<endl;
    string raspuns22;
    getline(cin,raspuns22);
    if (raspuns22=="Yes") cout<<"Yes finally a intelligent user or so i think."<<endl;
    else if (raspuns22=="No") cout<<"Well i did not expect anything more from you."<<endl;
    else cout<<"Boi if you can't answer a simple yes or no question then you don't deserve this fabulous bot."<<endl;
    }
    else if(raspuns2=="Exit") break;
    else if (raspuns2=="What is your favorite music?") {cout<<"I lisen to uamee hard-bass everyday. What is your favorite band?"<<endl;
    string raspuns23;
    getline(cin,raspuns23);
    cout<<"Hmmm "<<raspuns23<<" never heard of them might try to lisen to them sometime."<<endl;
    }
    else if (raspuns2=="/com 1") {cout<<"Care va fi intebarea?"<<endl;
    string raspuns3;
    getline(cin,raspuns3);
    cout<<"Care va fi raspunsul ?"<<endl;
    string raspuns31;
    getline(cin,raspuns31);
    cout<<"Ultima verificare Intrebarea este "<<raspuns3<<" si raspunsul va fi "<<raspuns31<<endl;
    cout<<"Comunicarea a fost inregistrata in memorie"<<endl;
    }
    else cout<<"Mate wut did u say?"<<endl;
    }}
    return 0;
}