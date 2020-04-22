# convert docx to md

    pandoc -o output.md --wrap=preserve --extract-media=./ input.docx
