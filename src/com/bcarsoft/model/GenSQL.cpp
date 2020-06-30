#include <iostream>
#include <list>

using namespace std;

/**
 * This is the model class for generate a sql command.
 * @author abel 
 **/
class GenSQL {
    private:
        string command;
        list<string> where;
        list<string> set;
        list<string> param;
        list<string> joins;
        bool create;
        bool select;
        bool insert;
        bool update;
        bool del;
    
    /**
     * Builder Method, create a new instance of this class.
     **/
    public: GenSQL() {
        command = "";
        where.clear();
        set.clear();
        param.clear();
        joins.clear();
        create = false;
        select = false;
        insert = false;
        update = false;
        del = false;
    }

    // getters and setters

    public:

    string getComannd() {
        return command;
    }

    void setCommand(string command_list) {
        command = command_list;
    }

    list<string> getWhere() {
        return where;
    }

    void setWhere(list<string> where_list) {
        where = where_list;
    }

    list<string> getSet() {
        return set;
    }

    void setSet(list<string> set_list) {
        set = set_list;
    }

    list<string> getParam() {
        return param;
    }

    void setParam(list<string> param_list) {
        param = param_list;
    }

    list<string> getJoins() {
        return joins;
    }

    void setJoins(list<string> joins_list) {
        joins = joins_list;
    }

    bool isCreate() {
        return create;
    }

    void setCreate(bool create_bool) {
        create = create_bool;
    }

    bool isSelect() {
        return select;
    }

    void setSelect(bool select_bool) {
        select = select_bool;
    }

    bool isInsert() {
        return insert;
    }

    void setInsert(bool insert_bool) {
        insert = insert_bool;
    }

    bool isUpdate() {
        return update;
    }

    void setUpdate(bool update_bool) {
        update = update_bool;
    }

    bool isDel() {
        return del;
    }

    void setDel(bool del_bool) {
        del = del_bool;
    }

};
