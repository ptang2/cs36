if __name__ == "__main__":
    with open ("hw2input.txt", 'w') as fout, open("hw2output.txt", 'r') as fin:
        si = 0
        di = 0
        ti = 0
        sourcelist = ['BALTIMORE','CHATTANOOGA', 'NASHVILLE', 'PASADENA']
        destlist = ['DENVER', 'MADISON', 'KNOXVILLE', 'CLARKSON']
        translist = ['AIR', 'TRAIN', 'BUS']
        count = 0
        for line in fin:
            fout.write("costDB[{}][{}][{}] = {}\n".format(sourcelist[si], destlist[di], translist[ti], line.strip())
            count += 1
            if(count >11)
                si += 1
            if(count != 0 && count % 4 == 0)
                di += 1
            else
                di = 0
            if(count != 0 && count % 3 == 0)
                ti += 1
            else
                ti = 0
    fout.close
