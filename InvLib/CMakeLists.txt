
add_library(InvLib STATIC InventoryItem.cpp BookItem.cpp MusicItem.cpp Inventory.cpp Date.cpp)

# Make sure the compiler can find include files for our  library
# when other libraries or executables link to the library
target_include_directories (InvLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})