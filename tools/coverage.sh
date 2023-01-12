llvm-cov gcov -f -b -a build/tests/Log/CMakeFiles/logger.dir/*.gcda
lcov --directory . --base-directory . --gcov-tool llvm-gcov.sh --capture -o cov.info
genhtml cov.info -o output
mv  cov.info coverage.dat
lcov_cobertura coverage.dat -o coverage.xml