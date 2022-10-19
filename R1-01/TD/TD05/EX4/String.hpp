#pragma once
#include <iostream>

struct String{
    size_t allocated_size;
    char *buffer;
};

void CreateString(String & str, const size_t size=256);
void DisplayString(const String & str);
size_t StringLength(const String & str);
void DestroyString(String & str);
void GrowString(String & str, size_t newSize);
void AssignString(String & str, const char *cstr);