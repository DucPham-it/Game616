class Zone {
protected:
    int range;
public:
    Zone(int range = 0);
    ~Zone(){};
    int getZone();
    void setZone(int range);
};