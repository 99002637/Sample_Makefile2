#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>


#include <numbers.h>
#define PROJECT_NAME    "Simple File"

void test_add(void);
void test_difference(void);
int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);

CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "difference", test_difference);
CU_basic_set_mode(CU_BRM_VERBOSE);
  
  CU_basic_run_tests();
  CU_cleanup_registry();

  return 0;
}
void test_add(void) 
{
  CU_ASSERT(15 == add(10, 5));
  
 
}

void test_subtract(void)
 {
  CU_ASSERT(5 == subtract(10, 5));
 }