# colors

Colors for the console.

## Example

```c++
#include <iostream>

#include "colors.h"

int main() {
  std::cout << bg_red(italic(underline(strikethrough(blue("I'm blue, italic, striked through, underlined and my back is red.")))));
  return 0;
}
```
