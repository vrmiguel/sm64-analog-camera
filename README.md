# SM64 Analog Camera

This has been made to work (and integrated in) [sm64pc](https://github.com/sm64pc/sm64pc). This will obviously break camera controls on a N64.
Similar to previous ROM hacks, we re-route Player 1's right stick movement to the left stick of P2, and then feed that data into the game's camera system. Using this camera.c gets you get simpler x-coordinate analog movements. The code in sm64pc uses a full xy-coordinate camera system, but still using this repo's controller code.
