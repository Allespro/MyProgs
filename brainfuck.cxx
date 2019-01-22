/*
 * brainfuck.cxx
 * 
 * Copyright 2018 Unknown <alles@Arch_AMD64>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

static char cpu[30000];

int main(int argc, char **argv) {
    vector<char> acc;
    char ch;
    ifstream infile(argv[1]);
    while (infile) {
        infile.get(ch);
        acc.push_back(ch);
    }
    infile.close();
    unsigned int j = 0;
    int brc = 0;
    for (int i = 0; i < acc.size(); ++i) {
        if (acc[i] == '>')
            j++;
        if (acc[i] == '<')
            j--;
        if (acc[i] == '+')
            cpu[j]++;
        if (acc[i] == '-')
            cpu[j]--;
        if (acc[i] == '.')
            cout << cpu[j];
        if (acc[i] == ',')
            cin >> cpu[j];
        if (acc[i] == '[') {
            if (!cpu[j]) {
                ++brc;
                while (brc) {
                    ++i;
                    if (acc[i] == '[')
                        ++brc;
                    if (acc[i] == ']')
                        --brc;
                }
            } else
                continue;
        } else if (acc[i] == ']') {
            if (!cpu[j])
                continue;
            else {
                if (acc[i] == ']')
                    brc++;
                while (brc) {
                    --i;
                    if (acc[i] == '[')
                        brc--;
                    if (acc[i] == ']')
                        brc++;
                }
                --i;
            }
        }
    }
}
