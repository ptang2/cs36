if __name__ == "__main__":
    with open ("stars.txt", 'w') as fout, open("input.txt", 'r') as fin:
        for line in fin:
            fout.write("/* " + line)
    fout.close
