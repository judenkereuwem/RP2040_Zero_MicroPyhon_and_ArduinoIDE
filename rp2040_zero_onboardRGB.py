import machine, neopixel
import utime

n = 1   #number of LED on strip
p = 16  #microcontroller pin

np = neopixel.NeoPixel(machine.Pin(p), n)

while True:
    #red for half a second
    np[0] = (255, 0, 0)
    np.write()
    utime.sleep(0.5)

    #green for half a second
    np[0] = (0, 255, 0)
    np.write()
    utime.sleep(0.5)

    #blue for half a second
    np[0] = (0, 0, 255)
    np.write()
    utime.sleep(0.5)