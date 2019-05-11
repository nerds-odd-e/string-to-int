set(Main_SRCS main.c)

add_library(core ${Main_SRCS})
add_executable(string-to-int main.c)
target_link_libraries(string-to-int core)
