num=int(input("Enter the number till where you want fibonacci series: "))
fst_num=0;
snd_num=1;
counter=0;
if num>=0:
    while counter<num:
        print(fst_num)
        temp=fst_num+snd_num
        fst_num=snd_num
        snd_num=temp
        counter+=1
