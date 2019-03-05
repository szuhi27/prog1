#Monty Hall probléma/paradoxon: Egy amerikai TV-s vetélkedőből ered. Röviden, három ajtó
	#közül egy möggött van nyeremény kettő mögött pedig nem. Kiválasztunk egyet, majd
	#egy a kiválasztottól különböző ajtót, mi mögött nincs nyeremény kinyitnak.
	#Ekkor adódik lehetőségünk maradni a korábban választott ajtónál, vagy megváltoztathatjuk
	#döntésünket. A nyerésnek akkor van esélye, ha változtatunk, vagyis minig megéri változtatni.




kiserletek_szama=10000000	
kiserlet = sample(1:3, kiserletek_szama, replace=T)	#meghatározzuk, hogy az adott kisérletben, hol van a díj
jatekos = sample(1:3, kiserletek_szama, replace=T)	#a játékos választása
musorvezeto=vector(length = kiserletek_szama)	#a műsorvezető választása a for ciklusban

for (i in 1:kiserletek_szama) {			#minden kísérleten "végig megy"

    if(kiserlet[i]==jatekos[i]){		#ha a nyeremény helye és a játékos választása egyezik
        mibol=setdiff(c(1,2,3), kiserlet[i])	#azok közül választ ami nem a játékos választása
    
    }else{   
        mibol=setdiff(c(1,2,3), c(kiserlet[i], jatekos[i]))	#a 3 közül csak azt válaszja, ami
        					#nem a játékos választása és nem az ajándék helye   
    }

    musorvezeto[i] = mibol[sample(1:length(mibol),1)]	#a korábbi események függvényében választ a müsvez

}

nemvaltoztatesnyer= which(kiserlet==jatekos)	#az a lehtőség ha nem változtat az ember és nyer
valtoztat=vector(length = kiserletek_szama)	#mi történik ha változtat...

for (i in 1:kiserletek_szama) {
    holvalt = setdiff(c(1,2,3), c(musorvezeto[i], jatekos[i]))
    	#az az ajtó marad csak, ami nem a korábban választott és nem a már kinyitott
    valtoztat[i] = holvalt[sample(1:length(holvalt),1)]   
}

valtoztatesnyer = which(kiserlet==valtoztat)	#az az eset, ahol a jóra vált az ember


#eztán a kiiratás: hány kísérelt volt, hányszor nyert váltás néélkül, hányszor azzal
sprintf("Kiserletek szama: %i", kiserletek_szama)
length(nemvaltoztatesnyer)
length(valtoztatesnyer)
length(nemvaltoztatesnyer)/length(valtoztatesnyer)	#a két lehetőség hányadosa
length(nemvaltoztatesnyer)+length(valtoztatesnyer)	#a két lehetőség összege(= kisérletek száma)








#forrás: https://bhaxor.blog.hu/2019/01/03/erdos_pal_mit_keresett_a_nagykonyvben_a_monty_hall-paradoxon_kapcsan (2019.03.05 (20:19))