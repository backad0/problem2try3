#include "RingBuffer.hpp"
#include <exception>
#include "CustomException.hpp"

RingBuffer::RingBuffer(int size) {
    this->size = size;
    arr = new int[size];
    firstPos = 0;
    occupied = 0;
}

int RingBuffer::getSize() {
    return occupied;
}

void RingBuffer::clear() {
    delete arr;
    arr = new int[size];
    firstPos = 0;
    occupied = 0;
}

bool RingBuffer::isEmpty() {
    if (occupied == 0) return true;
    return false;
}

void RingBuffer::add(int newElem) {
    if (occupied < size){
        if (occupied+firstPos<size){
            arr[occupied+firstPos] = newElem;
            occupied++;
        } else {
            arr[occupied+firstPos-size] = newElem;
            occupied++;
        }
    }else throw BufferIsFull();
}

int RingBuffer::takeElem() {
    int res;
    if (occupied!=0){
        res = arr[firstPos];
        arr[firstPos] = 0;
        if(firstPos == size-1){
            firstPos = 0;
        } else firstPos++;
        occupied--;
    } else throw BufferIsEmpty();
    return res;
}

int RingBuffer::getElem() {
    int res;
    if (occupied!=0){
        res = arr[firstPos];
    } else throw BufferIsEmpty();
    return res;
}

int RingBuffer::getPos(){
    return firstPos;
}

int RingBuffer::getMaxSize() {
    return size;
}



