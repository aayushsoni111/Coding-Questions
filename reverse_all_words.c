#include <stdio.h>
#include <string.h>

void reverse(char* s, int start, int end) {
  while (start < end) {
    char temp = s[start];
    s[start++] = s[end];
    s[end--] = temp;
  }
}

void reverseWords(char* s, int size) {
  if (size <= 1) return;
  int start = 0, end = 0;
  for (int i = 0; i < size; i++) {
    if (s[i + 1] == ' ' || s[i + 1] == '\0') {
      end = i;
      reverse(s, start, end);
      start = i + 2;
      i++;
    }
  }
}

int main() {
  char str[] = "hello world coder";
  reverseWords(str, strlen(str));
  printf("%s\n", str);  // Output: "olleh dlrow redoc"
  return 0;
}
