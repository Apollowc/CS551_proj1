// RUN: %clang_cc1 -emit-llvm %s  -o /dev/null

struct bar;

void foo()
{
  unsigned int frame, focus;
  (struct bar *) focus == (focus ? ((struct bar *) frame) : 0);
}

