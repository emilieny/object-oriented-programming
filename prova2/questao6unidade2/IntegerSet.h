#ifndef INTEGERSET_H
#define INTEGERSET_H


class IntegerSet {
    friend IntegerSet operator|(IntegerSet &, IntegerSet &); 
    friend IntegerSet operator&(IntegerSet &, IntegerSet &); 
public:
    IntegerSet();
    IntegerSet(const int *, int);    
    IntegerSet &operator<<(int);
    IntegerSet &operator>>(int);
    void print() const;

private:
    int * array{};
    int size;
};


#endif