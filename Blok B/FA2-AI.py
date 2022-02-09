#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Oriëntatie op AI

Final assignment 2: algoritmiek

(c) 2019 Hogeschool Utrecht,
Tijmen Muller (tijmen.muller@hu.nl)

Opdracht:
Beantwoord onderstaande vragen en werk onderstaande functies uit.
Voeg commentaar toe om je code toe te lichten.

Je kunt je functies testen met het gegeven raamwerk door het bestand
uit te voeren (of met behulp van `pytest`, als je weet hoe dat werkt).
Lever je werk in op Canvas als alle tests slagen.

Let op! Het is niet toegestaan om bestaande modules te importeren en te
        gebruiken, zoals `math` en `statistics`.
"""

# TODO: Vul hier je naam, klas en studentnummer in.
naam = "Tom Noordermeer"
klas = "TICT-ICT-V1K"
studentnummer = 1803921

"""
1.  Sorteeralgoritme

    Hieronder staat de pseudocode van een sorteeralgoritme:
    1. Startend vanaf het begin van een lijst, vergelijk elk element met zijn volgende buur.
    2. Als het element groter is dan zijn volgende buur, verwissel ze van plaats.
    3. Doorloop zo de lijst tot het eind.
    4. Als er verwisselingen zijn geweest bij stap 2., ga naar stap 1.

    1a. Handmatig toepassen
        Gegeven is de lijst l = [ 4, 3, 1, 2 ]. Geef de waardes die deze
        lijst aanneemt bij álle tussenstappen bij toepassing van
        bovenstaand sorteeralgoritme.
"""
        # TODO:[ als de lijst niet gesorteerd is
                # voor elke waarde in de lengte van de lijst
                #   kijken of waarde 1 groter is dan de waarde daarnaast
                #   daarna de getallen omwisselen zodat deze op een betere positie staan
                #   dan aannemen dat de lijst gesorteerd is
                #   dit herhalen tot de lijst volledig gesorteerd is 
                # ]
"""

    1b. Implementatie
        Implementeer het sorteeralgoritme in Python in een functie
        hieronder genaamd my_sort(lst).

    1c. Best en worst case
        -   Stel je hebt een lijst met de waarden 1, 2 en 3. Bij welke
            volgorde van de waarden in de lijst is het sorteeralgoritme
            het snelste klaar (best-case scenario)?
            Hoeveel vergelijkingen (zoals beschreven in stap 1. van de
            pseudocode) zijn nodig geweest?
"""
            # TODO: [de lijst is het snelste klaar met sorteren als de volgorde 1,2,3 is]
"""


        -   Bij welke volgorde van de waarden in de lijst is het
            sorteeralgoritme het minst snel klaar (worst-case scenario)?
            Hoeveel vergelijkingen zijn nodig geweest?
"""
            # TODO: [volgorde 3, 2 ,1 duurt het langst om op volgorde te zetten]
"""


        -   Stel je hebt een lijst met de waarden 1 tot en met 4.
            Wat is nu het best-case scenario?
            Hoeveel vergelijkingen zijn er nodig?
            En wat is nu het worst-case scenario?
            Hoeveel vergelijkingen zijn er nodig?
"""
            # TODO: [bestcase: 1,2,3,4
            # hier zijn 3 vergelijkingen voor nodig om de goede volgorde te bepalen
            # worstcase: 4,3,2,1 of 3,4,2,1
            # hier zijn 12 vergelijkingen voor nodig]
"""


        -   Stel je hebt een lijst met de waarden 1 tot en met n
            (je weet nu dus niet precies hoeveel waarden er in de lijst
            zitten, het zijn er 'n').
            Wat is nu het best-case scenario?
            Hoeveel vergelijkingen zijn er nodig?
            En wat is nu het worst-case scenario?
            Hoeveel vergelijkingen zijn er nodig?
"""
            # TODO: [best case scenario is als de lijst al in de goede volgorde staat.
            #       het aantal vergelijkingen dat word gebruikt is (n-1), dit is de lengte van de lijst -1.
            #       worst case is als de lijst omgedraait staat
            #       dan is het aantal vergelijkingen n*(n-1), dit is de lengte van de lijst keer zichzelf -1]
"""
"""


def my_sort(lst):
    """
    Sorteer gegeven lijst volgens het algoritme zoals beschreven in de pseudocode.

    1. Startend vanaf het begin van een lijst, vergelijk elk element met zijn volgende buur.
    2. Als het element groter is dan zijn volgende buur, verwissel ze van plaats.
    3. Doorloop zo de lijst tot het eind.
    4. Als er verwisselingen zijn geweest bij stap 2., ga naar stap 1.

    Zorg dat de gegeven lijst niet verandert, maar geef een nieuwe, gesorteerde variant van de lijst terug.

    Args:
        lst (list): Een lijst met elementen van gelijk type, bijvoorbeeld gehele getallen.

    Returns:
        list: Een nieuwe, gesorteerde variant van lijst `lst`.
    """
    # kopie maken van lst
    lst_sorted = lst.copy()
    # waarde van not_sorted op True zetten om de while loop te activeren
    not_sorted = True
    while not_sorted:
        # aannemen dat de lijst gesorteerd is
        not_sorted = False
        for x in range(len(lst_sorted)-1):
            if lst_sorted[x] > lst_sorted[x+1]:
                # wisselen van getallen
                y = lst_sorted[x]
                lst_sorted[x] = lst_sorted[x+1]
                lst_sorted[x+1] = y
                print(lst_sorted)
                # aannamen aangepast
                not_sorted = True
    return lst_sorted


def linear_search_recursive(lst, target):
    """
    Zoek een element in de gegeven lijst door middel van recursief lineair zoeken.

    Zorg dat de inhoud van de gegeven lijst niet verandert.

    Args:
        lst (list):     Een lijst met elementen van gelijk type, bijvoorbeeld gehele getallen.
        target (int):   Het gezochte element.

    Returns:
        bool: Of het element in de lijst voorkomt.
    """
    # als het target in de lijst zit is het True anders False
    # Kijk of de lijst groter is dan 0
    if 0 >= len(lst):
        print(False)
        return False
    # Kijk of de 0ste index gelijk is aan de target
    if lst[0] == target:
        print(True)
        return True
    # Haal de nulste index weg uit de lijst en kijk opnieuw
    print('Nieuwe zoek lijst: ', lst[1:])
    return linear_search_recursive(lst[1:], target)

def binary_search_recursive(lst, target):
    """
    Zoek een element in de gegeven lijst door middel van recursief binair zoeken.

    Je mag ervan uit gaan dat de gegeven lijst al gesorteerd is.
    Zorg dat de inhoud van de gegeven lijst niet verandert.

    Args:
        lst (list):     Een lijst met elementen van gelijk type, bijvoorbeeld gehele getallen.
        target (int):   Het gezochte element.

    Returns:
        bool: Of het element in de lijst voorkomt.
    """
    # ik heb geleerd dat je niet zomaar van iets uit mag gaan :)
    lst=my_sort(lst)
    low = 0                 # nulste index
    high = len(lst) -1      # lengte lijst -1 is maximale index
    mid = 0                 # mid een nul waarde geven

    while low <= high:
        # bepaal het midden.
        mid = (low + high) // 2
        # kijk of target onder midden ligt of boven.
        if target <= lst[mid]:
            high = mid
        else:
            low = mid
        # als low en high gelijk zijn dan moet target gelijk zijn daar aan.
        if low == high:
            return True
        # als low en high niet kleiner kunnen. kijken of target in het midden ligt daarvan.
        elif low+1 == high:
            return lst[high] == target or lst[low] == target


"""
==========================[ HU TESTRAAMWERK ]================================
Onderstaand staan de tests voor je code -- hieronder mag je niets wijzigen!
Je kunt je code testen door deze file te runnen of met behulp van pytest.
"""
import random


def test_id():
    assert naam != "", "Je moet je naam nog invullen!"
    assert studentnummer != -1, "Je moet je studentnummer nog invullen!"
    assert klas != "", "Je moet je klas nog invullen!"


def test_my_sort():
    lst_test = random.choices(range(-99, 100), k=6)
    lst_copy = lst_test.copy()
    lst_output = my_sort(lst_test)

    assert lst_copy == lst_test, "Fout: my_sort(lst) verandert de inhoud van lijst lst"
    assert lst_output == sorted(lst_test), \
        f"Fout: my_sort({lst_test}) geeft {lst_output} in plaats van {sorted(lst_test)}"


def test_linear_search_recursive():
    for _ in range(10):
        lst_test = random.sample(range(20), 6)
        target = random.randrange(20)
        found = target in lst_test
        lst_copy = lst_test.copy()

        outcome = linear_search_recursive(lst_test, target)
        assert lst_copy == lst_test, "Fout: linear_search_recursive(lst, target) verandert de inhoud van lijst lst"
        assert outcome == found, \
            f"Fout: linear_search_recursive({lst_test}, {target}) geeft {outcome} in plaats van {found}"


def test_binary_search_recursive():
    for _ in range(10):
        lst_test = sorted(random.sample(range(20), 6))
        target = random.randrange(20)
        found = target in lst_test
        lst_copy = lst_test.copy()

        outcome = binary_search_recursive(lst_test, target)
        assert outcome == found, \
            f"Fout: binary_search_recursive({lst_test}, {target}) geeft {outcome} in plaats van {found}"
        assert lst_copy == lst_test, "Fout: binary_search_recursive(lst, target) verandert de inhoud van lijst lst"


def __main():
    """ Test alle functies. """
    # Noodzakelijk voor gekleurde tekst binnen een Windows terminal
    import os
    os.system("")

    try:
        print("\x1b[32m")   # Groene tekstkleur
        test_id()

        test_my_sort()
        print("Je functie my_sort() werkt goed!")

        test_linear_search_recursive()
        print("Je functie linear_search_recursive() werkt goed!")

        test_binary_search_recursive()
        print("Je functie binary_search_recursive() werkt goed!")

        print("\nGefeliciteerd, alles lijkt te werken!")
        print("Lever je werk nu in op Canvas...")

    except AssertionError as ae:
        print("\x1b[31m")   # Rode tekstkleur
        print(ae)

    print("\x1b[0m")    # Reset tekstkleur


if __name__ == '__main__':
    __main()
