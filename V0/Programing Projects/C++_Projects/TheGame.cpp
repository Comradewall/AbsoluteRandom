#include <iostream>
#include <math.h>
#include <unistd.h>

using namespace std;

int main(){

    int Mao,Om1,Lang1;
    string M1;
    cout<<"The useless adventure"<<endl;
    MA:cout<<"Main Menu"<<endl;
    cout<<"1.Play"<<endl;
    cout<<"2.Options"<<endl;
    cout<<"3.Exit"<<endl;
    cin>>Mao;
    switch (Mao)
    {
    case 2:
        OM:cout<<"Option Menu"<<endl;
        cout<<"1.Language(Eng/Ro)"<<endl;
        cin>>Om1;
        if (Om1==1) {
            cout<<"1.English"<<endl;
            cout<<"2.Romana"<<endl;
            cin>>Lang1;
        }
        else {
            cout<<"Wrong val..."<<endl;
            goto OM;
        }
    case 3:
        cout<<"welp it was nice seeing you"<<endl;
        break;
    case 1:
        cout<<"And so the useless adventure begins..."<<endl;
        cout<<"You found yourself in a misterious plain..."<<endl;
        cout<<"I_______A______TTT"<<endl<<"@@@@@@@@@@@@@@@@@@"<<endl;
        cout<<"Tutorial:A-your avatar;T-tree;I-wall"<<endl;
        M1:cout<<"With direction will you go?(Left or Right)"<<endl;
        getline(cin,M1);
        if (M1=="Left"){
            cout<<"You walk torwards the wall you are very confused... and decide to turn to the forrest"<<endl;
        }
        else if (M1=="Right"){
            M2:cout<<"You soon find yourself at the entrance of the forrest. You see a glade a bit deeper in the forrest."<<endl;
            cout<<"will you go invetigate the mysterious glade?"<<endl;
        }
    }
    return 0;
}