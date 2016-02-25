#ifndef GOLF_H_
#define GOLF_H_

class Golf {
    private:
        static const int LEN = 40;
        char fullname[LEN];
        int handicap;

    public:
        Golf();
        Golf(const char * name, int hc);
        const Golf & setgolf(const Golf & g);
        void showgolf() const;
};

#endif
