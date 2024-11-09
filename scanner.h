#ifndef CLOX_SCANNER_H
#define CLOX_SCANNER_H

enum TokenType {

  LOX_TLEFT_PAREN,
  LOX_TRIGHT_PAREN,
  LOX_TLEFT_BRACE,
  LOX_TRIGHT_BRACE,
  LOX_TCOMMA,
  LOX_TDOT,
  LOX_TMINUS,
  LOX_TPLUS,
  LOX_TSEMICOLON,
  LOX_TSLASH,
  LOX_TSTAR,

  // One or two character tokens.

  LOX_TBANG_EQUAL,
  LOX_TEQUAL,
  LOX_TEQUAL_EQUAL,
  LOX_TGREATER,
  LOX_TGREATER_EQUAL,
  LOX_TLESS,
  LOX_TLESS_EQUAL,

  // Literals

  LOX_TIDENTIFIER,
  LOX_TSTRING,
  LOX_TNUMBER,

  // Keywords

  LOX_TAND,
  LOX_TCLASS,
  LOX_TELSE,
  LOX_TFALSE,
  LOX_TFOR,
  LOX_TFUN,
  LOX_TIF,
  LOX_TNIL,
  LOX_TOR,
  LOX_TPRINT,
  LOX_TRETURN,
  LOX_TSUPER,
  LOX_TTHIS,
  LOX_TTRUE,
  LOX_TVAR,
  LOX_TWHILE,

  LOX_TERROR,
  LOX_TEOF

};

struct Token {
  enum TokenType type;
  const char *start;
  int length;
  int line;
};

void initScanner(const char *source);
//> scan-token-h
Token scanToken();
//< scan-token-h

#endif CLOX_SCANNER_H
