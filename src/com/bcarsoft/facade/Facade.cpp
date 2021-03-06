#include "AFacade.cpp"
#include "../service/Service.cpp"

class Facade:AFacade {
    private:
        static Service service;

    public:

    /**
     * Builder Method.
     **/
    Facade() {
        service = Service();
    }

    /**
     * Generate Create SQL Command.
     * @param gen GenSQL Instance.
     **/
    std::string generateCreate(GenSQL gen) {
        return getService().generateCreate(gen);
    }

    /**
     * Generate Insert SQL Command.
     * @param gen GenSQL Instance.
     **/
    std::string generateInsert(GenSQL gen) {
        return getService().generateInsert(gen);
    }

    /**
     * Generate Update SQL Command.
     * @param gen GenSQL Instance.
     **/
    std::string generateUpdate(GenSQL gen) {
        return getService().generateUpdate(gen);
    }

    /**
     * Generate Select SQL Command.
     * @param gen GenSQL Instance.
     **/
    std::string generateSelect(GenSQL gen) {
        return getService().generateSelect(gen);
    }

    /**
     * Generate Join SQL Command.
     * @param gen GenSQL Instance.
     **/
    std::string generateJoin(GenSQL gen) {
        return getService().generateJoin(gen);
    }

    // getters and setters

    private:

    Service getService() {
        return service;
    }

};

int main() {
    Facade f = Facade();

}
