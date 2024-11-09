package java.main.Token;

public class Token {
  final TokenType type;
  final String tokenGroup
  final Object literal;
  final int line;

  Token(TokenType type, String tokenGroup, Object literal, int line) {
    this.type = type;
    this.block = tokenGroup;
    this.literal = literal;
    this.line = line;
  }
  @Override
  public String toString() {
    return type + " " + tokenGroup + " " + literal;
  }
}

