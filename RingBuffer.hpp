

class RingBuffer {
    friend class RBIterator;
public:
    RingBuffer(int size);
    int getSize();
    int getMaxSize();
    void clear();
    bool isEmpty();
    void add(int newElem);
    int takeElem(); //withdraw
    int getElem(); // not withdraw
    int getPos();
private:
    int size;
    int *arr;
    int firstPos;
    int occupied;
};
