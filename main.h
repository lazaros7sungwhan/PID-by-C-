#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

double pid_controller(double input);
INT32 get_input();
bool send_output(INT32 output);
