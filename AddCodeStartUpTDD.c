#include "unity.h"

int add(int lhs,int rhs){
    return lhs+rhs;
}


void test_add(void)
{
    int lhs=2;
    int rhs=4; 
    int expected_result=5;
    
    int actual_result=add(lhs,rhs);

    TEST_ASSERT(expected_result==actual_result);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    return UNITY_END();
}
