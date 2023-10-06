# tree-sitter-asm-intel
Parse Assembly text using [tree-sitter](https://tree-sitter.github.io/tree-sitter).


## Building + Using
### Neovim
Make sure you include the following somewhere in your `init.lua` file.

```lua
require("nvim-treesitter.configs").setup {
    ensure_installed = {"asm_intel"},
    parser_install_dir = installation_directory,
    highlight = { enable = true },

    -- More stuff
}
```


## Testing
### Unittests
- Install the [tree-sitter-cli](https://www.npmjs.com/package/tree-sitter-cli)
```sh
cd {root}
tree-sitter test
```

All tests should pass.


### Highlighting
- Clone this repository
- Add this clone's parent directory ``"parser-directories"`` (see [Per-user
  configuration](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#per-user-configuration))

If everything worked correctly, you should be able to highlight any Assembly file from the ``tree-sitter`` CLI like so:
```
tree-sitter highlight /path/to/file.asm
```

You should see something like this

TODO add a screenshot

And the next time you run ``tree-sitter test``, highlighting information will
be in the output.

TODO finish this
```
syntax highlighting:
  ✓ payload.usda (N assertions)
  ✓ references.usda (N assertions)
  ✓ relationship.usda (N assertions)
  ✓ specializes.usda (N assertions)
  ✓ string.usda (N assertions)

  ...
```


## Contributing
If you find a bug in an Assembly file, please submit an issue or pull request
specifying the expected parse and the actual results.
