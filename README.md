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

## Matériels utilisés
| **Composant** | **Référence** |
| :-------- | :-------- |
| LEDs 98x3 (98 pour chaque couleur) | [150505M173300](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/LED_150505M173300.pdf) |
| 6 Driver | [LM3404](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/lm3404.pdf) |
| Microcontrolleur | [STM32F103C6T6A LQFP-48](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/stm32f103c6.pdf) |
| DMX512 | Mâle: [NC3MAAH](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/nc3maah(DMX512M).pdf) Femelle: [NC3FAAH](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/nc3faah(DMX512F).pdf) |
| Power Module WPME-FDSM | [173950536](datasheet/Power_Module_WPME-FDSM_173950536.pdf) |
| LOW DROPOUT LINEAR REGULATOR | [AZ1117CH2-TRG1](datasheet/AZ1117CH2-3.3TRG1.pdf) |
| Step down | [Buck](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/173950378%20Buck%20convertor.pdf) | 
| LDO | [LDO](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/MCP1702-Data-Sheet(LDO)-DS20002008.pdf) | 
| Ecran OLED | [OLED Dipslay](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/SBC-OLED01_Datasheet_2022-01-06.pdf) |
| Alimentation | 24V / 5A | 
| Résistances | 2 x 1 kΩ ; 5 x 10 kΩ ; 2 x 1,6 kΩ ; 6 x 100 kΩ |
| Inductances | 6 x 18 uF |
| Condensateurs | 18 x 100 nF ; 2 x 1 uF ; 3 x 10 uF ; 1 x 22 uF ; 2 x 10 nF |
| LEDs SMD | 2 x [LED_0805_2012Metric](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/LED_0805_2012Metric.pdf) |
| Boutons poussoirs | 3 x Bouton |
| Puce MAX487 | [Puce](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/MAX487-MAX491.pdf) |

## Organisation du projet

### Architecture PCB:
* **Alimentation** : Power Module, LDO, Buck
* **Contrôle** : Microcontrolleur avec interface OLED
* **Pilotage LEDs** : drivers pour les chaînes R, G, B (2 drivers par couleur)
* **Protection et sécurité** : TODO (fusible, dissipateurs thermiques, diode)

### BOM:
[Matériel utilisé]()

## Journal de Bord du projet 
[Journal de Bord](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/journal_de_bord.md)


## Répartition des Tâches
| **Nom Prénom** | **Tâche(s)** |
| :-------- | :-------- |
| **TRITON Kylian** | Routage, PCB, valeurs des composants, Mise à jour du Github |
| **RIEU Pierric** | Software des drivers, PCB |
| **BAILLEUL Sara** | Soudage, vérification des empreintes, commandes des composants |
| **LEIRAS Clara** | TODO |
| **GOMRI Samuel** | TODO |

## Membres du projet
|   |   |   |   |   |
|:---:|:---:|:---:|:---:|:---:|
| ![](https://github.com/TritonKylian.png) | ![](https://github.com/PierricRieu.png) | ![](https://github.com/sblikeice.png) | ![](https://github.com/claralrs9.png) | ![](https://github.com/sgomri.png) | 
| [**@TritonKylian**](https://github.com/TritonKylian)<br>TRITON Kylian| [**@PierricRieu**](https://github.com/PierricRieu)<br>RIEU Pierric | [**@sblikeice**](https://github.com/sblikeice)<br> BAILLEUL Sara | [**@claralrs9**](https://github.com/claralrs9)<br>LEIRAS Clara| [**@sgomri**](https://github.com/sgomri)<br>GOMRI Samuel |

