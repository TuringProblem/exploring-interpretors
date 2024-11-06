#include <stdio.h>
#include <string.h>

#include "common.h"
#include "scanner.h"

struct Scanner {
  const char* start;
  const char* current;
  int line;
};


struct Scanner scanner;
void initScanner(const char* source) {
  scanner.start = source;
  scanner.current = source;
  scanner.line = 1;
}

// Checking if the char is within the alphabet

static bool isAlpha(char c) {
  return (c >= 'a' && c <= 'z' ||
          c >= 'A' && c <= 'Z' ||
          c == '_');
}


// Checking if the number is within range

static bool isDigit(char c) { return c >= '0' && c <= '9'; }

static char advance() {
  scanner.current++;
  return scanner.current[-1];
}

static char peek() { return *scanner.current; }


