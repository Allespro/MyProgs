#!/usr/bin/python
import time
class text:
    X = '\x1b[1m\x1b[31mX\x1b[0m\x1b[1m'
    A = '\x1b[1m\x1b[32mA\x1b[0m\x1b[1m'
    G = '\x1b[1m\x1b[33mG\x1b[0m\x1b[1m'
    T = '\x1b[1m\x1b[34mT\x1b[0m\x1b[1m'
    C = '\x1b[1m\x1b[35mC\x1b[0m\x1b[1m'
    O = '\x1b[1m\x1b[36mO\x1b[0m\x1b[1m'

Hromos = ("       $"+text.O+"",
          "      $"+text.O+"-"+text.X+"$",
          "     $"+text.O+"---"+text.X+"$",
          "     $"+text.O+"----"+text.X+"$",
          "      $"+text.T+"----"+text.A+"$",
          "       $"+text.O+"---"+text.X+"$",
          "        $"+text.O+"-"+text.X+"$",
          "         "+text.T+"$",
          "       $"+text.X+"---"+text.O+"$",
          "      $"+text.T+"----"+text.A+"$",
          "     $"+text.C+"----"+text.G+"$",
          "     $"+text.X+"---"+text.O+"$")

if __name__ == '__main__':
    print("\x1b[1m")
    while (True):
        for x in range(0,12):
           time.sleep(0.1)
           print(Hromos[x])
