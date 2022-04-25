#include <Math.h>
#include <string>
#include <iostream>

#define PI 3.14159265

using namespace std;

int main()
{
    float sh, nat, ang, norm, cosang, wh,TH,tcnorm;
    wh = 1.0;
    while (wh == 1) {
        string shty;
        cout << "Shell Penetration calculator for Ap/Apcr shells." << endl;
        cout << "Based on T=h/cos(aplha)." << endl;
        cout << "Please insert shell type:";
        getline(cin, shty);
        if (shty == "Ap") norm = 5.0;
        else if (shty == "Apcr") norm = 2.0;
        else {
            cout << "Invalid Shell Type " << endl;
            break;
        }
        cout << "Please insert shell caliber:";
        cin >> sh;
        cout << "Please inset nominal armor thickness:";
        cin >> nat;
        cout << "Please insert angle of sheell:";
        cin >> ang;
        if (ang >= 70.0) {
            cout << "Ricochet will occur shell will not penetrate the taget.";
                break;
        }
        if (sh > nat * 3) {
            cout << "Shell will penetrate acordig to the three calibers rule.";
            break;
        }
        else if (sh > nat * 2) {
            tcnorm = (norm * 1.4 * sh) / nat;
        }
        else tcnorm = norm;
        ang = ang + tcnorm;
        cosang = cos(ang * PI / 180.0);
        TH = nat / cosang;
        if (TH > sh) {
            cout << "Shell will not penetrate." << endl;
            cout << "Total armor thickness: " << TH << endl;
            break;
        }
        else if (TH < sh) {
            cout << "Shell will penetrate." << endl;
            cout << "Total armor thickness: " << TH << endl;
            break;
        }
        else {
            cout << "The nominal armor thickness is equal to shell caliber." << endl;
            break;
        }
    }
}
