#include "cmake-build-debug/_deps/googletest-src/googletest/include/gtest/gtest.h"
#include "RBIterator.cpp"


TEST(RingBuffer, RBTest) {
    RingBuffer ringBuffer(10);
    //check is it empty when created
    EXPECT_TRUE(ringBuffer.isEmpty());
    //add 5 elements
    ringBuffer.add(1);ringBuffer.add(2);ringBuffer.add(3);ringBuffer.add(4);ringBuffer.add(5);
    //take first without withdraw
    EXPECT_EQ(ringBuffer.getElem(), 1);
    EXPECT_EQ(ringBuffer.getSize(), 5);
    //take first withdraw
    EXPECT_EQ(ringBuffer.takeElem(),1);
    EXPECT_EQ(ringBuffer.getSize(), 4);
    ringBuffer.clear();
    EXPECT_TRUE(ringBuffer.isEmpty());
}

TEST(RingBuffer, iteratorTest) {
    RingBuffer ringBuffer(5);
    ringBuffer.add(1);ringBuffer.add(2);ringBuffer.add(3);ringBuffer.add(4);ringBuffer.add(5);
    RBIterator itr(ringBuffer);
    itr.start();
    EXPECT_EQ(itr.getValue(),1);
    itr.next();
    EXPECT_EQ(itr.getValue(),2);
    itr.next();
    EXPECT_EQ(itr.getValue(),3);
    itr.next();
    EXPECT_EQ(itr.getValue(),4);
    itr.next();
    EXPECT_EQ(itr.getValue(),5);
    EXPECT_TRUE(itr.finish());
}

TEST(RingBuffer, iteratorTest1){
    RingBuffer ringBuffer(5);
    ringBuffer.add(0);ringBuffer.add(1);ringBuffer.add(2);ringBuffer.add(3);ringBuffer.add(4);
    RBIterator itr(ringBuffer);
    itr.start();
    ringBuffer.takeElem();
    ringBuffer.add(5);
    RBIterator itr1(ringBuffer);
    itr1.start();
    for (int i=0; i<5; i++){

        std::cout << itr.getValue();
        itr.next();
    }
    std::cout << std::endl;
    for (int i=0; i<5; i++){

        std::cout << itr1.getValue();
        itr1.next();
    }
}
