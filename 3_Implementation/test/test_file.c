
#include "admin.h"
#include "unity.h"
#include "insert_new.h"
#include "book.h"
#include "user.h"
#include "View_all_movies.h"
#include "find.h"
#include "transaction.h"
#include "unity_internals.h"
#include "test_ticket_booking.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_correct_admin_name(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, login_admin("sriram","admin"),"correct admin name");
}
void test_correct_admin_password(void)
{
  TEST_ASSERT_EQUAL(1, login_admin("sriram","admin"));
}
void test_wrong_admin_name(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(0, login_admin("wrong","admin"),"Wrong admin name");
}
void test_wrong_admin_password(void)
{
  TEST_ASSERT_EQUAL(0, login_admin("sriram","wrong"));
}
void test_correct_user_name(void)
{
    TEST_ASSERT_EQUAL(1,login_user("user01","userpw"));
}
void test_correct_user_password(void)
{
    TEST_ASSERT_EQUAL(1,login_user("user01","userpw"));
}
void test_wrong_user_name(void)
{
    TEST_ASSERT_EQUAL(0,login_user("wrong","userpw"));
}
void test_wrong_user_password(void)
{
    TEST_ASSERT_EQUAL(0,login_user("user01","wrong"));
}
void test_insert_new_movie(void)
{
    TEST_ASSERT_EQUAL(1,insert_new_movie("Superman","26-Nov-2020",300));
}
void test_view_all_movies(void)
{
     TEST_ASSERT_EQUAL(1,viewAll());
}
void test_searching_available_movie(void)
{
    TEST_ASSERT_EQUAL(1,find_movie("Superman"));
}
void test_searching_unavailable_movie(void)
{
    TEST_ASSERT_EQUAL(0,find_movie("Spiderman"));
}
void test_booking_unavailable_movie(void)
{
    int a[2]={1,2};
    TEST_ASSERT_EQUAL(0,book_ticket("Spiderman",2,a));
}
void test_booking_available_movie(void)
{
    int a[2]={1,2};
    TEST_ASSERT_EQUAL(1,book_ticket("Superman",2,a));
}
void test_booking_unavailable_seats(void)
{
    int a[2]={1,2};
    TEST_ASSERT_EQUAL(0,book_ticket("Superman",2,a));
}
void test_booking_available_seats(void)
{
    int a[2]={6,7};
    TEST_ASSERT_EQUAL(1,book_ticket("Superman",2,a));
}
void test_view_all_transactions(void)
{
    TEST_ASSERT_EQUAL(1,old_record());
}



int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_correct_admin_name);
  RUN_TEST(test_correct_admin_password);
  RUN_TEST(test_correct_user_name);
  RUN_TEST(test_correct_user_password);
  RUN_TEST(test_wrong_admin_name);
  RUN_TEST(test_wrong_admin_password);
  RUN_TEST(test_wrong_user_name);
  RUN_TEST(test_wrong_user_password);
  RUN_TEST(test_insert_new_movie);
  RUN_TEST(test_view_all_movies);
  RUN_TEST(test_searching_available_movie);
  RUN_TEST(test_searching_unavailable_movie);
  RUN_TEST(test_booking_unavailable_movie);
  RUN_TEST(test_booking_available_movie);
  RUN_TEST(test_booking_unavailable_seats);
  RUN_TEST(test_booking_available_seats);
  RUN_TEST(test_view_all_transactions);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
