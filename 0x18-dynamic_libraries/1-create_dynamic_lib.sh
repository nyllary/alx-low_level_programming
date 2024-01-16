#!/bin/bash
cmake_minimum_required (VERSION 3.5)
project (hello_world)
add_library (func SHARED func.c)
add_executable (a.out main.c)
