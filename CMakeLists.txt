cmake_minimum_required(VERSION 3.2)

project ("heavalframework")

set(SOURCE_MAIN
	Heaval.cpp
	Heaval.h
)

source_group("main" FILES ${SOURCE_MAIN})

set(SOURCE_IO
	src/io/Stdio.cpp
	src/io/Stdio.h
)

source_group("io" FILES ${SOURCE_IO})

set(FRAMEWORK_SOURCE
	src/framework/HeavalBase.cpp
	src/framework/HeavalBase.h
)

source_group("framework" FILES ${FRAMEWORK_SOURCE})

set(HEAVAL_SOURCE
	${SOURCE_MAIN}
	${SOURCE_IO}
	${FRAMEWORK_SOURCE}
)

link_directories(${HEAVAL_SOURCE})

include_directories(
	BEFORE
	src
)

add_library(heavalframeworksource STATIC ${HEAVAL_SOURCE})

add_executable(heavalframework Heaval.cpp)

target_link_libraries(heavalframework heavalframeworksource)
