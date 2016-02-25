#ifndef PLORG_H_
#define PLORG_H_

class Plorg {
    private:
        static const int LEN = 20;
        char name[LEN];
        int ci;

    public:
        Plorg();
        void reset(const int & c);
        void show() const;
};

#endif
