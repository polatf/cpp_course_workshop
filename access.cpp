#include <iostream>
using namespace std;

class Hero {
public:
    int publicHealth;

protected:
    int protectedEnergy;

private:
    int privateSecret;

public:
    Hero() {
        publicHealth = 100;
        protectedEnergy = 75;
        privateSecret = 42;
    }

    void showAll() {
        cout << "[Hero içinden erişim]" << endl;
        cout << "Public Health: " << publicHealth << endl;
        cout << "Protected Energy: " << protectedEnergy << endl;
        cout << "Private Secret: " << privateSecret << endl;
    }
};

class SuperHero : public Hero {
public:
    void showInherited() {
        cout << "[SuperHero (türetilmiş sınıf) içinden erişim]" << endl;
        cout << "Public Health: " << publicHealth << endl;
        cout << "Protected Energy: " << protectedEnergy << endl;
        // cout << "Private Secret: " << privateSecret << endl; // ❌ Bu hata verir!
    }
};

int main() {
    Hero h;
    SuperHero sh;

    cout << "[main() içinden erişim]" << endl;
    cout << "Public Health: " << h.publicHealth << endl;
    // cout << "Protected Energy: " << h.protectedEnergy << endl; // ❌ Hata
    // cout << "Private Secret: " << h.privateSecret << endl;     // ❌ Hata

    cout << endl;
    h.showAll();          // ✅ Hepsine erişebiliyor çünkü class içinde
    cout << endl;
    sh.showInherited();   // ✅ Sadece protected + public

    return 0;
}
