# CMakeList.txt : CMake project for Basics, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_subdirectory ( External/SDL )

add_library ( Basics )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Basics PROPERTY CXX_STANDARD 20)
endif()

target_sources ( Basics 
	PRIVATE 
	"Source/Basics.cpp" 
	"Source/Basics.h" 
)

target_link_libraries ( Basics 
	INTERFACE
	SDL3::SDL3-static
)

# TODO: Add tests and install targets if needed.
