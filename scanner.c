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

// Checks if the current line is at the end of a line
static bool isAtEnd() { return *scanner.current == '\0'; }

static char advance() {
  scanner.current++;
  return scanner.current[-1];
}

static char peek() { return *scanner.current; }


static char peekNext() {
  if (isAtEnd()) return '0\';
  return scanner.current[]
}

/**
  * Checking there are three possible conditions for match() -> which returns a boolean:
  *  -> if is at end -> then return false
  *  -> if the line we are at is not the expected character: return false
  *  -> else we just increment the scanners' current position and return true.
  */

static bool match(char expected) {
  if (isAtEnd()) return false; 
  if (*scanner.current != expected) return false;
  scanner.current++;
  return true;
}

/**
 * We need to make the token, makeToken creates the 
 *
 *
 **/

static Token makeToken(struct TokenType type) {
  Token token;
  token.type = type;
  token.start = scanner.start;
 /**
   * Check the length of the token -> scanner.current: points to the current position is (in memory) -> scanner.start:
   * points to where the scanning begins (in memory)
   *
  **/
  token.length = (int)(scanner.current - scanner.start);
  token.line = scanner.line;
  return token;
}


/**
  * This is checking the Token struct (which contains:)
  *  the Enum of TokenType -> the char start pos, length and line
  */
static Token errorToken(const char* message) {
  struct Token token;
  token.type = type;
  token.start = scanner.start;
   

}

