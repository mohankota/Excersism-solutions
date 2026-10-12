namespace targets {
// TODO: Insert the code for the alien class here
    class Alien
    {
    public:
        int x_coordinate;
        int y_coordinate;
    
    private:
        int health;
    
    public:
        Alien(int x, int y);

        int get_health();

        bool hit();

        bool is_alive();

        bool teleport(int x_new, int y_new);

        bool collision_detection(Alien a);
    };

    Alien::Alien(int x, int y) {
        x_coordinate = x;
        y_coordinate = y;
        health = 3;
    }

    int Alien::get_health() {
        return health;
    }

    bool Alien::hit() {
        if(health > 0) {
            health--;
        }
        return true;
    }

    bool Alien::is_alive() {
        return (health > 0);
    }

    bool Alien::teleport(int x_new, int y_new) {
        x_coordinate = x_new;
        y_coordinate = y_new;

        return true;
    }

    bool Alien::collision_detection(Alien a) {
        bool ret = false;
        if(x_coordinate == a.x_coordinate &&
           y_coordinate == a.y_coordinate) {
                ret = true;
           }
        return ret;
    }
    
}  // namespace targets
