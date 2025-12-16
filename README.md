📚 Cursus C++ - Module CPP00 

Ce dépôt contient les exercices réalisés dans le cadre des exos 00 et 01 du cursus C++, visant à introduire les fondamentaux du langage C++ et les bases de la Programmation Orientée Objet (POO).
🎯 Exercices Réalisés
💻 EX00 : Introduction au C++

Ce module se concentre sur les bases de la compilation et de la manipulation des arguments en ligne de commande.
Exercice 00 : Megaphone
Concept(s) Abordé(s)	Description
Compilation	Utilisation de g++.

Manipulation de chaînes	Utilisation de std::string et de la fonction std::toupper pour mettre en majuscules.

Principe : Le programme megaphone prend un ou plusieurs arguments et les affiche tous en MAJUSCULES. Si aucun argument n'est fourni, un message par défaut est affiché.

Exemple d'exécution :
Bash

$> ./megaphone "hello world" "I AM A C++ PROGRAM"
HELLO WORLD I AM A C++ PROGRAM
$> ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *

📞 EXO1 : Bases de la Programmation Orientée Objet (POO)

Ce module introduit la conception de classes et l'encapsulation.
Exercice 01 : PhoneBook
Concept(s) Abordé(s)	Description
Classe et Objets	Création des classes Contact et PhoneBook.
Encapsulation	Utilisation d'attributs privés et de méthodes publiques pour gérer l'accès aux données.
Tableaux d'Objets	Gestion et stockage de plusieurs objets Contact dans le PhoneBook.
Interaction Utilisateur	Gestion des entrées utilisateur (cin) pour les commandes.

Principe : Le programme phonebook implémente un annuaire simple et interactif. Il accepte trois commandes :

    ADD : Ajouter un nouveau contact. Les contacts sont stockés dans un tableau de taille fixe (8).

    SEARCH : Afficher la liste des contacts et permettre à l'utilisateur de sélectionner un index pour afficher les détails complets.

    EXIT : Quitter le programme.

⚙️ Instructions de Compilation

Le projet utilise un Makefile standard pour la compilation.
