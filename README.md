# Electronics Projects

My projects while learning electronics and microcontroller programming.
Each project lives in its own folder with code, schematic and a short README.

## Hardware and tools

- Arduino Uno R3 (Arduino Starter Kit)
- VS Code with PlatformIO
- KiCad for schematics
- UNI-T multimeter, breadboard, basic components

## Projects

| # | Project | Description | Status |
|---|---|---|---|
| 01 | [Traffic Lights](01-traffic-lights) | Car and pedestrian traffic light started by a button | Done |

More projects will be added here as I build them.

## Repository structure

Each project folder contains:

```
NN-project-name/
├── README.md        project description, parts, pin map
├── platformio.ini   board and build settings
├── src/main.cpp     source code
├── schematic/       KiCad project and exported PDF/PNG
└── images/          photos of the finished build
```

## Build and upload

Open a project folder in VS Code with the PlatformIO extension, then:

```
pio run               # build
pio run -t upload     # upload to the board
```

## Credits

Some projects are based on or inspired by the Arduino Starter Kit book.
Projects with my own design are marked in their README.

## About

I am learning electronics hands-on, with the goal of building
more complex projects (robotics, sensors, wireless) over time.
