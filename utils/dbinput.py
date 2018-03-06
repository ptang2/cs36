if __name__ == "__main__":
    with open ("hw2input.txt", 'r') as fin, open("hw2output.txt", 'w') as fout:
        si = 0
        di = 0
        ti = 0
        sourcelist = ['BALTIMORE','CHATTANOOGA', 'NASHVILLE', 'PASADENA']
        destlist = ['DENVER', 'MADISON', 'KNOXVILLE', 'CLARKSON']
        translist = ['AIR', 'TRAIN', 'BUS']
        count = 0
        for line in fin:
            if line.strip():
                print("{}: {} {} {}".format(count, si, di, ti))
                fout.write("costDB[{}][{}][{}] = {};\n".format(sourcelist[si], destlist[di], translist[ti], line.strip()))
                count += 1
                if(count != 0 and count % 12 == 0):
                    si += 1
                    di = 0
                elif(count != 0 and count % 3 == 0):
                    di += 1
                if(count != 0 and count % 3 == 0):
                    ti = 0
                else:
                    ti += 1
    fout.close
