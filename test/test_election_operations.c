#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <election_operations.h>
#define PROJECT_NAME    "Election"

/* Prototypes for all the test functions */
void test_forvote(void);
void test_newcandidate(void);
void test_listofvoters(void);
void test_livecount(void);
void test_listofcandidates(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "voting", test_forvote);
  CU_add_test(suite, "newcandidate", test_newcandidate);
  CU_add_test(suite, "listofvoters", test_listofvoters);
  CU_add_test(suite, "livecount", test_livecount);
  CU_add_test(suite, "listofcandidates", test_listofcandidates);

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_forvote(void) {
  CU_ASSERT(30 == forvote(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == forvote(750, 7500));
}

void test_newcandidate(void) {
  CU_ASSERT(3 == newcandidate(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == newcandidate(1000, 900));
}

void test_listofvoters(void) {
  CU_ASSERT(1 == listofvoters(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == listofvoters(2, 5));
}

void test_livecount(void) {
  CU_ASSERT(1 == livecount(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == livecount(2, 2));
}

void test_listofcandidates(void) {
  CU_ASSERT(1 == listofcandidates(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == listofcandidates(2, 2));
}
