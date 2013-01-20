Spřátelená čísla
================


Zadání úlohy
------------
Úkolem je realizovat program, který nalezne spřátelená čísla v zadaném intervalu.

Vstupem programu je kladné celé číslo n, které udává prohledávaný interval.

Výstupem programu je seznam nalezených spřátelených čísel, každá dvojice na jedné řádce. Čísla v seznamu jsou vypsaná od nejmenšího k největšímu, ve dvojici je vždy zobrazeno menší číslo první. Zobrazena jsou pouze ta čísla, která jsou v zadaném intervalu (od 1 do n včetně). Za každou řádkou výstupu je odřádkování.

Program musí detekovat nesprávný vstup. Pokud je limit zadaný nesprávně (záporný, nečíselný, nulový, ...), program musí situaci detekovat, vypsat chybové hlášení a ukončit se. Za vypsanou chybovou hláškou je odřádkování.

Spřátelená čísla jsou taková celá kladná čísla, že jedno je rovno součtu vlastních dělitelů čísla druhého. Například čísla 220 a 284 jsou spřátelená, protože:

seznam všech vlastních dělitelů 220: 

`1, 2, 4, 5, 10, 11, 20, 22, 44, 55 a 110`

`1+2+4+5+10+11+20+22+44+55+110 = 284`

a zároveň

seznam všech vlastních dělitelů 284: 

`1, 2, 4, 71 a 142`

`1+2+4+71+142 = 220`

I v této úloze platí, že výstup Vašeho programu se musí přesně shodovat s očekávaným výstupem (referenční). Opět máte k dispozici archiv s testovacími vstupy a očekávanými výstupy (využití pro testování - viz FAQ). Nezapomeňte na odřádkování (\n), zejména za posledním řádkem výpisu.

Váš program bude spouštěn v omezeném testovacím prostředí. Je omezen dobou běhu (limit je vidět v logu referenčního řešení) a dále je omezena i velikost dostupné paměti. S omezením dostupné paměti by v této úloze neměl být problém, omezení času již roli hraje. Naivní řešení, které zkouší každou dvojici čísel v zadaném intervalu, nemá šanci uspět. Analyzujte úlohu a vymyslete rychlejší řešení, které bude každé číslo z uvažovaného intervalu testovat pouze jednou.

Úloha je hodnocena v bonusovém režimu. Pro získání plného nominálního hodnocení postačuje řešení, které testuje každé číslo ze zadaného intervalu pouze 1x. Pro získání bonusu je potřeba úlohu vyřešit tak, aby pracovala rychleji i pro větší čísla, tedy optimalizovat hledání dělitelů.

Upozornění: nečestná řešení, která spřátelená čísla fakticky nepočítají, budou zpětně hodnocena 0 body. Faktickým výpočtem se rozumí, že odevzdaný program je postaven na algoritmu, který je schopen spřátelená čísla počítat. Výpis vhodné části předem vyplněného pole tedy není faktický výpočet.


Ukázka práce programu
---------------------
<pre>Zadejte limit:
10000
220, 284
1184, 1210
2620, 2924
5020, 5564
6232, 6368
</pre>