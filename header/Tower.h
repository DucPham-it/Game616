#include "main.h"
#include "Zone.h"
#include "Bullet.h"
#include "Enemy.h"

class Tower {
protected:
    // TODO
    Zone* zone;
    Enemy* enemy;
    Bullet* bul;
    int rateOfFire;
    
public:
    Tower(  Zone* zone,
            Enemy* enemy,
            Bullet* bul  );
    ~Tower(){};
    void chooseEnemy();
};