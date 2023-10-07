msg db  'Hello, world!',0xa ;our dear string

- Allow labels to come at the start of the line (or on their own line)

- Go through TODO notes in the code
- Make sure this works in a large repository of assembly code
- Add support for
    - start-of-line comments
    - inline comments
    - Make sure sections work (BSS, DATA, TEXT, etc)
- Replace all references of "gcc" to "meta"
- Make sure the pointer syntax works (base + index * scale + displacement)
    - Reference: https://github.com/rush-rs/tree-sitter-asm/blob/main/grammar.js#L22-L44
