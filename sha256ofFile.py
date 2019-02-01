import hashlib

def sha256_generate(string):
    print(hashlib.sha256(string.encode('utf-8')).hexdigest())

if __name__ == '__main__':
    f = open('file.txt')
    for line in f.readlines():
        line = line.replace('''
''', '');
        sha256_generate(line)
