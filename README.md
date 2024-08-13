# Todo-App
This to-do app is a small project made by me (**@ViktorPopp**) and is currently only supporting the command line but will eventually be supporting GUI applications.

## Features
* ➕ Add todo's
* ✅ Check todo's
* 📄 Have multiple lists
* ❌ Remove todo's

## Installation
**Windows** <br>
There a as always prebuild binaries for windows on the releases page. <br>

**Linux** <br>
Linux is currently not supported. See how to build it yourself in the [Build Guide](#build-guide) <br>

## Usage
A simple guide on using this to-do app:
```console
> To-do-App.exe list.txt # Open the app and open and/or create a list
> Enter a command: new # Create a new to-do
> Enter a title: Release Todo-App
> Enter a description: Go to GitHub releases and create a new release

> Enter a command: check # Check a to-do
> Enter an index number: 1 # Remember it starts from 0

> Enter a command: list # show all the to-do's
> [ ] Release Todo-App: Go to GitHub releases and create a new release
> [x] Create README.md: Create the README file to the Todo-App repo. Add Features, Installation, Usage and Build Guide.

> Enter a command: rm # Remove a to-do
> Enter an index number: 1
```

## Build Guide
**Windows** <br>
```console
> cd Scripts && GenVisualStudio2022.bat # Choose 2019 for VS2019
```
Open Todo-App.sln and build the project.

**Linux** <br>
Requirements: Premake installed and added to path. <br>
```console
$ premake5 gmake # Can also use gmake2
$ make
```