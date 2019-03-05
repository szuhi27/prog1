#Brunt tétel szerint az ikerprímek (olyan prímpár, melynek különbsége=2) reciprokának összege
	#egy véges értékhez tert, ezt nevezzük "Brun-konstans"-nak.


library(matlab)

stp <- function(x){

    primes = primes(x)	#meghatározza a prímeket "x"-ig
    diff = primes[2:length(primes)]-primes[1:length(primes)-1]	
    		#a kivonás a-b, a:a meghatározott primek közül az első kivételébel mind, 
    			#b: az utolsó kivételével mind
    idx = which(diff==2)	#azokat, ahol a kivonás eredménye=2 azokat eltárolja az idx vektorban
    t1primes = primes[idx]	#az össze prímek közül kivesszük azonat, ahol a kivonás eredménye 2 volt
    							#ez lesz az ikerpár első tagja
    t2primes = primes[idx]+2	#azonos művelet, csak itt hozzáadunk 2őt a helyekhez, így
    								#a párok második tagjait kapjuk meg
    rt1plust2 = 1/t1primes+1/t2primes	#vesszük az ikerprímek reciprokait és összeadjuk azokat
    return(sum(rt1plust2))	#majd a korábban kiszámolt összegeket összeadjuk
}

#idáig tart a függvény ami kiszámolja az értékekekt, hogy az ikerprímek hova tartanak
#lefele ezen érték(ek) ábrázolása

x=seq(13, 1000000, by=10000)
y=sapply(x, FUN = stp)
plot(x,y,type="b")









#RGui (3.5.2)
#forrás: https://hu.wikipedia.org/wiki/Brun-t%C3%A9tel (2018.03.05. 18:59)
		#https://youtu.be/xbYhp9G6VqQ (2018.03.05. 18:55)