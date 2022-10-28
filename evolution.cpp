
class Creature {
    private:
        Creature() {
            // name
            // gender
            // type
        };

        Creature reproduce(Creature c1, Creature c2) {
            // return new creature based on other creatures
        };

        Creature die(Creature c1) {
          // return dead creature  
        };
};

class Actions {
    private:
        Creature createCreature() {
            // check chance of spawnChance()
            // return a new creature
        };
    public:
        float spawnChance() {
            // return the spawn chance of a creature
        };

        float dieChance() {
            // return chance of creatrue death
        };

        float reproduceChcne() {
            // return chance that two creatures will reproduce
        };
};

class World {
    public: 
        Creature creature;

    private:
        int** generateMap() {
            // return a map 
        };
};


int main() {
    // loop for getting chances of die, reproduce and create
    // run program here
    return 0;
};