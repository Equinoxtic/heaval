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

set(SOURCE_CMDUTILS
	src/cmdutils/Command.cpp
	src/cmdutils/Command.h
)

source_group("cmdutils" FILES ${SOURCE_CMDUTILS})

set(SOURCE_LIB
	src/lib/Convert.cpp
	src/lib/Convert.h
	src/lib/StringUtils.cpp
	src/lib/StringUtils.h
	src/lib/Thread.cpp
	src/lib/Thread.h
)

set(SOURCE_LIB_SYS
	src/lib/sys/Platform.cpp
	src/lib/sys/Platform.h
	src/lib/sys/System.cpp
	src/lib/sys/System.h
)

source_group("lib" FILES ${SOURCE_LIB})
source_group("lib\\sys" FILES ${SOURCE_LIB_SYS})

set(SOURCE_COMMON
	src/common/Resources.cpp
	src/common/Resources.h
	src/common/Shell.cpp
	src/common/Shell.h
)

source_group("common" FILES ${SOURCE_COMMON})

set(SOURCE_FRAMEWORK
	src/framework/FrameworkHooks.cpp
	src/framework/FrameworkHooks.h
	src/framework/HeavalFramework.cpp
	src/framework/HeavalFramework.h
)

set(SOURCE_FRAMEWORK_INFO
	src/framework/info/Version.cpp
	src/framework/info/Version.h
)

set(SOURCE_FRAMEWORK_DISPLAY
	src/framework/modules/display/Title.cpp
	src/framework/modules/display/Title.h
	src/framework/modules/display/Linebar.cpp
	src/framework/modules/display/Linebar.h
)

source_group("framework" FILES ${SOURCE_FRAMEWORK})
source_group("framework\\info" FILES ${SOURCE_FRAMEWORK_INFO})
source_group("framework\\modules\\display" FILES ${SOURCE_FRAMEWORK_DISPLAY})

set(HEAVAL_SOURCE
	${SOURCE_MAIN}
	${SOURCE_IO}
	${SOURCE_CMDUTILS}
	${SOURCE_MATH}
	${SOURCE_LIB}
	${SOURCE_LIB_SYS}
	${SOURCE_FRAMEWORK}
	${SOURCE_FRAMEWORK_INFO}
	${SOURCE_COMMON}
	${SOURCE_FRAMEWORK_DISPLAY}
)

link_directories(${HEAVAL_SOURCE})

include_directories(
	BEFORE
	src
)

add_library(heavalframeworksource STATIC ${HEAVAL_SOURCE})

add_executable(heavalframework Heaval.cpp)

target_link_libraries(heavalframework heavalframeworksource)
