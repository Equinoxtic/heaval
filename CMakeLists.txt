cmake_minimum_required(VERSION 3.2)

project ("heavalframework")

set(SOURCE_IO
	src/io/Stdio.cpp
	src/io/Stdio.h
	src/io/StdUtils.cpp
	src/io/StdUtils.h
)

source_group("io" FILES ${SOURCE_IO})

set(SOURCE_MATH
	src/math/Formula.cpp
	src/math/Formula.h
	src/math/Math.cpp
	src/math/Math.h
	src/math/MathUtils.cpp
	src/math/MathUtils.h
)

source_group("math" FILES ${SOURCE_MATH})

set(SOURCE_LIB
	src/lib/Convert.cpp
	src/lib/Convert.h
	src/lib/StringUtils.cpp
	src/lib/StringUtils.h
)

source_group("lib" FILES ${SOURCE_LIB})

set(SOURCE_FRAMEWORK
	src/framework/HeavalFramework.cpp
	src/framework/HeavalFramework.h
	src/framework/FrameworkHooks.cpp
	src/framework/FrameworkHooks.h
)

source_group("framework" FILES ${SOURCE_LIB})

set(HEAVAL_SOURCE
	${SOURCE_MAIN}
	${SOURCE_IO}
	${FRAMEWORK_SOURCE}
	${SOURCE_MATH}
	${SOURCE_LIB}
	${SOURCE_FRAMEWORK}
)

link_directories(${HEAVAL_SOURCE})

include_directories(
	BEFORE
	src
)

add_library(heavalframeworksource STATIC ${HEAVAL_SOURCE})

add_executable(heavalframework Heaval.cpp)

target_link_libraries(heavalframework heavalframeworksource)
