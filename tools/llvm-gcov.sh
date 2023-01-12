#!/bin/bash
exec llvm-cov-12 gcov "$@" -r . --xml-pretty