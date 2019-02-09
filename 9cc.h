#ifndef _9CC_H
#define _9CC_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// トークンの型を表す値
enum {
  TK_NUM = 256,  // 整数トークン
  TK_EOF,        // 入力の終わりを示すトークン
};

// トークンの型
typedef struct {
  int ty;        // トークンの型
  int val;       // tyがTK_NUMの場合、その数値
  char *input;   // トークン文字列(エラーメッセージ用)
} Token;

enum {
  ND_NUM = 256,  // 整数ノードの型
};

typedef struct Node {
  int ty;
  struct Node *lhs;
  struct Node *rhs;
  int val;
} Node;

#endif
