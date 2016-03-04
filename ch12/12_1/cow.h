#ifndef COW_H_
#define COW_H_

class Cow {
    private:
        char name[20];
        char * hobby;
        double weight;

    public:
        Cow(); 
        Cow(const char * nm, const char * ho, double wt);
        Cow(const Cow & c);
        ~Cow() { delete [] hobby; }
        Cow & operator=(const Cow & c);
        void show() const;
};

#endif
