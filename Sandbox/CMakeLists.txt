add_executable ( Sandbox )

target_link_libraries ( Sandbox
	PRIVATE
	Basics
)

target_sources ( Sandbox
	PRIVATE
	"Source/Sandbox.hpp"
	"Source/Sandbox.cpp"
)