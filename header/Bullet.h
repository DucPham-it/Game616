#include "main.h"
#include "Zone.h"
enum typeBullet {
    BulletNone,             // Đạn bình thường
    BulletPoison,           // Đạn gây độc
    BulletIce,              // Đạn làm chậm
    BulletFire,             // Đạn lan sát thương
    BulletRocket            // Đạn gây nổ
};

class Bullet {
protected:
    int damage;
    int level;
    double speed;
    typeBullet bul;
public:
    Bullet(typeBullet bul = BulletNone);
    virtual void upgradeBullet() = 0;
};

class BulletNone : Bullet {
protected:

public:
    BulletNone();
    void upgradeBullet() override ;
};

class BulletPoison : Bullet {
protected:
    int timePoison;
    int hppw;
public:
    BulletPoison();
    void upgradeBullet() override ;
};

class BulletIce : Bullet {
protected:
    float numSlow;
public:
    BulletIce();
    void upgradeBullet() override ;
};

class BulletFire : Bullet {
protected:
    float numFire;
public:
    BulletFire();
    void upgradeBullet() override ;
};

class BulletRocket : Bullet {
protected:
    Zone zone;
    int damage;
public:
    BulletRocket();
    void upgradeBullet() override ;
};