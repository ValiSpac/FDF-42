# fdf

## Description
The **fdf** project is about creating a simple wireframe model representation of a 3D landscape using the MiniLibX graphics library. The program reads data from a `.fdf` file, which contains height values for points in a 2D grid, and then renders the corresponding 3D representation using an isometric projection.

## Features
- Reads `.fdf` files to interpret 3D landscapes.
- Renders wireframe models in an isometric projection.
- Uses the MiniLibX library for graphical rendering.
- Smooth window management.
- Closes cleanly upon pressing `ESC` or clicking the window's close button.

## Example `.fdf` File
```
0  0  0  0  0  0  0  0  0  0
0  0  10 10 0  0  10 10 0  0
0  0  10 10 0  0  10 10 0  0
```
Each number represents a point in space:
- The horizontal position corresponds to its x-coordinate.
- The vertical position corresponds to its y-coordinate.
- The value corresponds to its altitude (z-coordinate).

## Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/your-repo/fdf.git
   cd fdf
   ```
2. Compile the project using the Makefile:
   ```sh
   make
   ```
3. Run the program with a `.fdf` file:
   ```sh
   ./fdf maps/42.fdf
   ```

## Makefile Targets
- `all` - Compiles the project.
- `clean` - Removes object files.
- `fclean` - Removes the executable and object files.
- `re` - Recompiles everything.

## Dependencies
- **MiniLibX**: A lightweight graphics library.
- **libft**: A custom standard library replacement.
- **Math Library (-lm)**: Required for mathematical computations.

## Controls
- `ESC` - Exit the program.
- Window close button - Exit the program.

