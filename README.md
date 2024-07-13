# TOPLAMLARI-TAM-BOLUNEBILIR-CIFTLER
Projemız; C++ dılınde yazılmıs olup, rastgele olusturulan dızı elemanlarının, verılen 2 adet gırdıye tam bolunmesını kontrol eden programdır. 


TOPLAMLARI-TAM-BOLUNEBILIR-CIFTLER
Yazdıgım algoritmenın anlatımı ve kıstasları asagıda verılmısıtr.

Elimizde tamsayılardan olusan n uzunlugunda bir dizi ve k pozitif tamsayısı bulunmaktadır. Bu dizinin indislerini kullanarak (i, j) , 0 ≤ i , j < n seklinde ciftler (ikililer) oluSturuyoruz. Amacımız oyle ciftler bulmak ki i < j indis kuralına uygun ve bu ciftlerin toplamları k pozitif tamsayısına tam bolunebilsin.

KISTASLAR:

2 <n<1000 1 <k<100 −1000 < array[i] < 1000

Farz edelim ki elimizde 6 adet tamsayı iceren bir dizi mevcut: arr = [1,4,2,65,8,−3]. Bu dizideki ciftlerden k = 5 pozitif tamsayısına tam bolunebilen ve i < j indis kuralına uygun olanları bulmak istiyoruz. O halde bu kurala uygun olan tum ciftleri su sekilde sıralayabiliriz: (0,1),(2,4),(4,5).

Yazacagınız program kullanıcı tarafından iki adet girdi alabilmeli. Bu girdileriden ilki dizinin uzunlugu (n) ve ikincisi de bulmak istedigimiz ciftlerin toplamlarını tam bolecek olan pozitif (k) tamsayıdır. Programı calıstırdıgımızda oncelikle n uzunlugundaki dizi rastgele olarak doldurulmalı. Ardından k pozitif tamsayısına tam bolunen ciftleri bulup ekrana cıktı olarak bu ciftlerin indislerini vermeli. Sayet kuralımıza uygun herhangi bir cift yok ise ekrana hic bir cıktı verilmesine gerek yoktur. C++ programlama dilini kullanarak yukarıdaki istenilen adımları gerceklestiren bir algoritma gelistiriniz.
