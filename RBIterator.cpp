#include "RBIterator.hpp"

RBIterator::RBIterator(RingBuffer& ringBuffer) :itr(ringBuffer) {
    pos = 0;
}

void RBIterator::start() {
    pos = itr.getPos();
}

void RBIterator::next() {
    if (pos == itr.getMaxSize()-1){
        pos = 0;
    } else pos++;
}

bool RBIterator::finish() {
    if(itr.getPos()!=0){
        if (pos == itr.getPos()-1) return true;
    } else {
        if (pos == itr.getMaxSize()-1) return true;
    }
    return false;
}

int RBIterator::getValue() {
    return itr.arr[pos];
}

