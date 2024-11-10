package java.main.Token;

//lexemes -> are only the raw substrings of the source code

public class Token {
  final TokenType type;
  final String lexemes; 
  final Object literal;
  final int line;

  Token(TokenType type, String tokenGroup, Object literal, int line) {
    this.type = type;
    this.block = tokenGroup;
    this.literal = literal;
    this.line = line;
  }
  // Outputing the Token Type, Group that it is associated with and the Literal value
  @Override
  public String toString() {
    return type + " " + lexemes + " " + literal;
  }
}

