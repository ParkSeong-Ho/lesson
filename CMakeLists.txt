cmake_minimum_required(VERSION 3.10)
project(FmtTestProject)

# C++ 표준 설정 (C++ 17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 실행 파일 이름 지정 및 소스 파일 추가
add_executable(gitex gitex.cpp)

# 시스템에 설치된 fmt 패키지 찾기
find_package(fmt REQUIRED)

# main 타겟에 fmt 라이브러리 링크
target_link_libraries(gitex PRIVATE fmt::fmt)