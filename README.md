# TinyUSB CDC on STM32F302C8 with STM32 HAL minimum configuration

This implements a basic serial echo using the TinyUSB implementation of a CDC driver.

## Important Notes

- This was designed for a custom board using a **16 MHz** crystal. Change the frequency by using the clock solver to whatever is your board's frequency.
- Project was generated using STM32CubeMX. The project is designed to be opened in either vscode using the embedded tools extension or STM32CubeIDE.
- I've based it off the notes in the [TinyUSB discussions](https://github.com/hathach/tinyusb/discussions/633) and [this repository](https://github.com/Jo5ta/stm32_freeRTOS_tinyUSB_SCPI/tree/main)
- Make sure you do not put extra device classes that aren't implemented in your code (like mass storage) otherwise it will not work! I've only included the minimum required for CDC to work.
- TinyUSB seems to be very unforgiving for newcomers like me, since there are big pitfalls (previous dotpoint) and no obvious way of debugging it using only SWD (My board does not have SWO or secondary UART for their debugging messages since I have used every pin on it), but I will say once it is set up it is way better than the builtin STM32 HAL USB middleware, which sucks because of stuff like needing a delay between CDC transmits, since it does not buffer each transmit.

## License

MIT License

Copyright (c) 2024 PETER TANNER

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
