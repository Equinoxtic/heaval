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
	src/cmdutils/CommandHandler.cpp
	src/cmdutils/CommandHandler.h
	src/cmdutils/Flag.cpp
	src/cmdutils/Flag.h
)

source_group("cmdutils" FILES ${SOURCE_CMDUTILS})

set(SOURCE_CONSOLE
	src/console/ConsoleLogging.cpp
	src/console/ConsoleLogging.h
	src/console/ConsoleMessage.cpp
	src/console/ConsoleMessage.h
)

source_group("console" FILES ${SOURCE_CONSOLE})

set(SOURCE_PARSER
	src/parser/Calls.cpp
	src/parser/Calls.h
	src/parser/CommandParser.cpp
	src/parser/CommandParser.h
)

source_group("parser" FILES ${SOURCE_PARSER})

set(SOURCE_LIB
	src/lib/Convert.cpp
	src/lib/Convert.h
	src/lib/File.cpp
	src/lib/File.h
	src/lib/StringUtils.cpp
	src/lib/StringUtils.h
	src/lib/Thread.cpp
	src/lib/Thread.h
	src/lib/Time.cpp
	src/lib/Time.h
)

set(SOURCE_LIB_SYS
	src/lib/sys/Platform.cpp
	src/lib/sys/Platform.h
	src/lib/sys/System.cpp
	src/lib/sys/System.h
)

set (SOURCE_LIB_GIT
	src/lib/git/GitUtils.cpp
	src/lib/git/GitUtils.h
	src/lib/git/GitDown.cpp
	src/lib/git/GitDown.h
	src/lib/git/LibGit.cpp
	src/lib/git/LibGit.h
)

source_group("lib" FILES ${SOURCE_LIB})
source_group("lib\\sys" FILES ${SOURCE_LIB_SYS})
source_group("lib\\git" FIELS ${SOURCE_LIB_GIT})

set(SOURCE_COMMON
	src/common/Paths.cpp
	src/common/Paths.h
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
	src/framework/info/Repository.cpp
	src/framework/info/Repository.h
)

set(SOURCE_FRAMEWORK_DISPLAY
	src/framework/modules/display/Title.cpp
	src/framework/modules/display/Title.h
	src/framework/modules/display/Linebar.cpp
	src/framework/modules/display/Linebar.h
	src/framework/modules/display/Prompt.cpp
	src/framework/modules/display/Prompt.h
)

set(SOURCE_FRAMEWORK_HANDLES
	src/framework/modules/handle/Error.cpp
	src/framework/modules/handle/Error.h
	src/framework/modules/handle/Warning.cpp
	src/framework/modules/handle/Warning.h
	src/framework/modules/handle/Process.cpp
	src/framework/modules/handle/Process.h
)

source_group("framework" FILES ${SOURCE_FRAMEWORK})
source_group("framework\\info" FILES ${SOURCE_FRAMEWORK_INFO})
source_group("framework\\modules\\display" FILES ${SOURCE_FRAMEWORK_DISPLAY})
source_group("framework\\modules\\handle" FILES ${SOURCE_FRAMEWORK_HANDLES})

set(HEAVAL_SOURCE
	${SOURCE_MAIN}
	${SOURCE_IO}
	${SOURCE_CMDUTILS}
	${SOURCE_PARSER}
	${SOURCE_CONSOLE}
	${SOURCE_PARSER}
	${SOURCE_MATH}
	${SOURCE_LIB}
	${SOURCE_LIB_SYS}
	${SOURCE_LIB_GIT}
	${SOURCE_FRAMEWORK}
	${SOURCE_FRAMEWORK_INFO}
	${SOURCE_COMMON}
	${SOURCE_FRAMEWORK_DISPLAY}
	${SOURCE_FRAMEWORK_HANDLES}
)

link_directories(${HEAVAL_SOURCE})

include_directories(
	BEFORE
	src
)

add_library(heavalframeworksource STATIC ${HEAVAL_SOURCE})

add_executable(heavalframework Heaval.cpp)

target_link_libraries(heavalframework heavalframeworksource)
