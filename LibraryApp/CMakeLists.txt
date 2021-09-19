add_executable(LibraryApp LibraryApp.cpp)



# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# the application
target_link_libraries (LibraryApp LINK_PUBLIC InvLib)
