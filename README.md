# 2526_Projet1AB_Helios
Projet de 1ère année ENSEA sur un stroboscobe RGB
## Sommaire
* [Cahier des charges](#cahier-des-charges)
* [Matériels utilisés](#matériels-utilisés)
* [Organisation du projet](#organisation-du-projet)
  * [Architecture PCB](#architecture-pcb)
* [Journal de Bord du projet](#journal-de-bord-du-projet)
* [Répartition des Tâches](#répartition-des-tâches)
* [Membres du projet](#membres-du-projet)
## Cahier des charges
**Project scénique à LED**
* Strobe RGBW haute puissance (100 W minimum)
* Pilotage DMX512 (standard éclairage)
* interface utilisateur intuitive
* Modifier la fréquence d'allumage des LEDs
* Modes :
    * Intensité R/G/B
    * Strobe (fréquence, intensité)
* Sécurité thermique + électrique

**Contraintes**
* Alimentation secteur
* Fiabilité (usage scène)
* Dissipation thermique sérieuse
* Respect du DMX (isolation, timing)


## Présentation du projet
* [Présentation Hardware](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/Presentation/Projet%201AB%20-%20H%C3%A9lios.pdf)
* [Architecture du Code](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/Presentation/Projet1AB_Helios_Code.pdf) (DMX 512)

## Matériels utilisés
| **Composant** | **Référence** |
| :-------- | :-------- |
| LEDs 98 (x3 couleurs) | [150505M173300](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/LED_150505M173300.pdf) |
| 6 Driver | [LM3404](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/lm3404.pdf) |
| Microcontrolleur | [STM32F103C6T6A LQFP-48](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/stm32f103c6.pdf) |
| DMX512 | Mâle: [NC3MAAH](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/nc3maah(DMX512M).pdf) Femelle: [NC3FAAH](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/nc3faah(DMX512F).pdf) |
| Power Module WPME-FDSM | [173950536](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/Power_Module_WPME-FDSM_173950536.pdf) |
| LOW DROPOUT LINEAR REGULATOR | [AZ1117CH2-TRG1](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/AZ1117CH2-3.3TRG1.pdf) | 
| Ecran OLED | [OLED Dipslay](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/SBC-OLED01_Datasheet_2022-01-06.pdf) |
| Alimentation | 24V / 5A | 
| Résistances | 2 x 1 kΩ ; 5 x 10 kΩ ; 2 x 1,6 kΩ ; 6 x 100 kΩ |
| Inductances | 6 x 18 uH |
| Condensateurs | 18 x 100 nF ; 2 x 1 uF ; 3 x 10 uF ; 1 x 22 uF ; 2 x 10 nF |
| LEDs SMD | 2 x [LED_0805_2012Metric](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/LED_0805_2012Metric.pdf) |
| Boutons poussoirs | 3 x [Bouton ](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/6x6_mm_sw_switches.pdf) |
| Puce MAX485E | [Puce](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/MAX1487E-MAX491E.pdf) |
| Connecteur AMASS | [Connecteur 1](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/XT30U-M_AMASS_Datasheet.pdf)|
| Connecteur PinHeader | [Connecteur 2](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/Datasheets%20du%20projet/connecteur%20pinheader.pdf)|

## Organisation du projet

### Architecture PCB:
* **Alimentation** : Power Module WPME-FSDM, AZ1117CH2-TRG1
* **Contrôle** : Microcontrolleur avec interface OLED
* **Pilotage LEDs** : drivers pour les chaînes R, G, B (2 drivers par couleur)
* **Protection et sécurité** : TODO (fusible, dissipateurs thermiques, diode)

### BOM:
[Matériel utilisé](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/Hardware/KICAD_HELIOS/bom/ibom.html)

## Journal de Bord du projet 
[Journal de Bord](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/journal_de_bord.md)

## Répartition des Tâches
| **Nom Prénom** | **Tâche(s)** |
| :-------- | :-------- |
| **TRITON Kylian** | Schématique du PCB, Routage du PCB, Valeurs des composants (fichier python), Mise à jour du Github, Recherche des composants |
| **RIEU Pierric** | Software des drivers (intégralité des codes), PCB |
| **BAILLEUL Sara** | Soudage, Vérification des empreintes sur PCB, Commande des composants et bon de commande du PCB, Recherche des composants (soudage et datasheet), Mise à jour du GitHub |
| **LEIRAS Clara** | LEDs (Schématique du PCB), Soudage, Recherche des composants (datasheet) |
| **GOMRI Samuel** | Recherche des composants |

## Membres du projet
|   |   |   |   |   |
|:---:|:---:|:---:|:---:|:---:|
| ![](https://github.com/TritonKylian.png) | ![](https://github.com/PierricRieu.png) | ![](https://github.com/sblikeice.png) | ![](https://github.com/claralrs9.png) | ![](https://github.com/sgomri.png) | 
| [**@TritonKylian**](https://github.com/TritonKylian)<br>TRITON Kylian| [**@PierricRieu**](https://github.com/PierricRieu)<br>RIEU Pierric | [**@sblikeice**](https://github.com/sblikeice)<br> BAILLEUL Sara | [**@claralrs9**](https://github.com/claralrs9)<br>LEIRAS Clara| [**@sgomri**](https://github.com/sgomri)<br>GOMRI Samuel |

