# CMakeList.txt : CMake project for Basics, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable ( Basics )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Basics PROPERTY CXX_STANDARD 20)
endif()

target_sources ( Basics 
	PRIVATE 
	"Basics.cpp" 
	"Basics.h" 
)

#target_link_libraries ( Basics )

# TODO: Add tests and install targets if needed.
