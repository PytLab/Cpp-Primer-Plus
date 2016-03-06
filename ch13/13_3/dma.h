// dma.h  -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// abstract base class
class ABC
{
private:
    char * label;
    int rating;

public:
    ABC(const char * l = "null", int r = 1);
    ABC(const ABC & a);
    virtual ~ABC() = 0;
    virtual void View() const;
    ABC & operator=(const ABC & a);
    friend std::ostream & operator<<(std::ostream & os, const ABC & a);
};

//  Base Class Using DMA
class baseDMA : public ABC
{
private:
    
public:
    baseDMA(const char * l = "null", int r = 0);
    friend std::ostream & operator<<(std::ostream & os, 
                                     const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public ABC
{
private:
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null",
             int r = 0);
    lacksDMA(const char * c, const ABC & a);
    virtual void View() const;
    friend std::ostream & operator<<(std::ostream & os, 
                                     const lacksDMA & rs);
};

// derived class with DMA
class hasDMA :public ABC
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null",
           int r = 0);
    hasDMA(const char * s, const ABC & c);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    virtual void View() const;
    hasDMA & operator=(const hasDMA & rs);  
    friend std::ostream & operator<<(std::ostream & os, 
                                     const hasDMA & rs);
};

#endif
