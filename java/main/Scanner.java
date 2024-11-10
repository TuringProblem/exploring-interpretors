package main.Scanner;

import main.TokenType.*;
import java.util.HashMap;
import java.util.Map;
import java.util.List;
import java.util.ArrayList;

class Scanner {

  Map tokenList<String, TokenType> = new HashMap<>();
  private final String SOURCE;
  private final List<Token> TOKENS = new List<>();

  public Scanner(String source) { this.SOURCE = source; }
  

}

