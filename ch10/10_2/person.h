#include <string>
#include <cstring>

class Person {
    private:
        static const int LIMIT = 25;
        std::string lname_;
        char fname_[LIMIT];

    public:
        Person() { lname_ = ""; fname_[0] = '\0'; }
        Person(const std::string & lname, const char * fname = "Heyyou");
        void show() const;
        void formal_show() const;
};
