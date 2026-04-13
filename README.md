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
| LEDs 98x3 (98 pour chaque couleur) | [150505M173300](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/LED_150505M173300.pdf) |  |
| 6 Driver | [lm3404](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/lm3404.pdf) |
| Microcontrolleur | [stm32f103c6T6A LQFP-48](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/stm32f103c6.pdf) |
| DMX512 | Mâle: [nc3faah](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/nc3maah(DMX512M).pdf) Femelle: [nc3maah](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/nc3faah(DMX512F).pdf) |
| Power Module WPME-FDSM | [173950536](datasheet/Power_Module_WPME-FDSM_173950536.pdf) |
| LOW DROPOUT LINEAR REGULATOR | [AZ1117CH2-TRG1](datasheet/AZ1117CH2-3.3TRG1.pdf) |
| Step down | [Buck](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/173950378%20Buck%20convertor.pdf) | 
| LDO | [LDO](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/MCP1702-Data-Sheet(LDO)-DS20002008.pdf) | 
| Ecran OLED | [OLED Dipslay](https://github.com/DBXYD/2526_Projet1AB_Helios/blob/master/datasheet/SBC-OLED01_Datasheet_2022-01-06.pdf) |
| Alimentation | 24V / 5A | 
| Câblage |  |
| Résistances |  |
| Condensateurs |  |
| LEDs SMD |  |

## Organisation du projet

### Architecture PCB:
* PCB Editor link


## Journal de Bord du projet 
| **Séance** | **Avancement** |
| :-------- | -------- |
| Séance 1 | Choix du projet, Mise en place de l'architecture Git, répartition des Tâches |
| Séance 2 | Choix des composants, recherche des datasheets |
| Séance 3 | PCB schéma |
| Séance 4 | Routage et familiarisation avec le branchement en DMX |

## Répartition des Tâches
| **Nom Prénom** | **Tâche(s)** |
| :-------- | :-------- |
| **TRITON Kylian** | Modélisation |
| **RIEU Pierric** | Software des drivers |
| **BAILLEUL Sara** | TODO |
| **LEIRAS Clara** | TODO |
| **GOMRI Samuel** | TODO |

## Membres du projet
|   |   |   |   |   |
|:---:|:---:|:---:|:---:|:---:|
| ![](https://github.com/TritonKylian.png) | ![](https://github.com/PierricRieu.png) | ![](https://github.com/sblikeice.png) | ![](https://github.com/claralrs9.png) | ![](https://github.com/USERNAME.png)  ![](https://github.com/sgomri.png) | 
| [**@TritonKylian**](https://github.com/TritonKylian)<br>TRITON Kylian| [**@PierricRieu**](https://github.com/PierricRieu)<br>RIEU Pierric | [**@sblikeice**](https://github.com/sblikeice)<br> BAILLEUL Sara | [**@claralrs9**](https://github.com/claralrs9)<br>LEIRAS Clara| [**@sgomri**](https://github.com/sgomri)<br>GOMRI Samuel |

