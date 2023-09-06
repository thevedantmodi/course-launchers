# course-launcher
Simple CLI program that calls launches the VSCode workspace for my classes in a given semester (at the time of creation, F23). 

This allows me to run this command in a terminal and easily get to my work, with the proper workspace settings applied, as just opening the file while in the directory e.g. `code .` is not enough for me!

I plan to add this shell script to my system, where it can be called by hotkeys I have set on my computer, so I can easily launch coursework. It's all about the speed!

## Usage
```course [course-code]```

Install on system by download the project files, and copy the binary to your local bin file

```sudo cp ./course /usr/local/bin```

## Notes

Make sure there is a `./.vscode` in the directory of the course
