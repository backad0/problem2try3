#include "RingBuffer.cpp"

class RBIterator
{
public:
    RBIterator(RingBuffer& ringBuffer);

    void start();
    void next();
    bool finish();
    int getValue();
private:
    RingBuffer& itr;
    int pos;
};
