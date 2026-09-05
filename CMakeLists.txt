cmake_minimum_required(VERSION 3.16)
project(Quink VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Emit build/compile_commands.json so editors/IDEs know the real compiler flags
# (including Homebrew Qt's framework paths) and can resolve #include <QApplication>.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Runs Qt's "meta-object compiler" automatically, so classes using Q_OBJECT work.
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_add_executable(Quink main.cpp)

target_link_libraries(Quink PRIVATE Qt6::Widgets)

# On macOS, produce a proper .app bundle.
set_target_properties(Quink PROPERTIES MACOSX_BUNDLE TRUE)
