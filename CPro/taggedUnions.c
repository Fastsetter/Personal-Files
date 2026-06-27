#include <stdbool.h>
#include <stdio.h>

#define Bool_Tag(x)                                                            \
  (struct dynamic) { .tag = _Bool_Tag, .data.x_bool = x }
#define Int_Tag(x)                                                             \
  (struct dynamic) { .tag = _Int_Tag, .data.x_int = x }
#define Float_Tag(x)                                                           \
  (struct dynamic) { .tag = _Float_Tag, .data.x_float = x }

enum tag { _Bool_Tag, _Int_Tag, _Float_Tag };

struct dynamic {
  enum tag tag;
  union data {
    int x_int;
    float x_float;
    bool x_bool;
  } data;
};

void display_tag(struct dynamic *dp) {
  switch (dp->tag) {
  case _Bool_Tag:
    printf("%d\n", dp->data.x_bool);
    break;
  case _Int_Tag:
    printf("%d\n", dp->data.x_int);
    break;
  case _Float_Tag:
    printf("%0.2f\n", dp->data.x_float);
    break;
  }
  return;
}

int main() {

  struct dynamic b = Bool_Tag(1);
  struct dynamic i = Int_Tag(12);
  struct dynamic f = Float_Tag(98.98);
  display_tag(&b);
  display_tag(&i);
  display_tag(&f);

  return 0;
}
