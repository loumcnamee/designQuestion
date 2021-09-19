#include <gtest/gtest.h>

#include "BookItem.h"
#include "Date.h"

// Demonstrate some basic assertions.
TEST(DateTest, ConstructorTest) {
  
  ItemDate date1 = ItemDate(12,23,2021);

  ASSERT_EQ(date1.getYear(), 2021);
  ASSERT_EQ(date1.getMonth(), 12);
  ASSERT_EQ(date1.getDay(), 23);
}

// Demonstrate some basic assertions.
TEST(BookItemTest, ConstructorTest) {
  
  ItemDate date1 = ItemDate(12,23,2021);

  BookItem book1 = BookItem("auth1","title1",date1);

  ASSERT_EQ(book1.getAuthor(), "auth1");
  ASSERT_EQ(book1.getTitle(), "title1");

  const ItemDate date1a = book1.getPubDate();

  ASSERT_EQ(date1a.getYear(), 2021);
  ASSERT_EQ(date1a.getMonth(), 12);
  ASSERT_EQ(date1a.getDay(), 23);


}