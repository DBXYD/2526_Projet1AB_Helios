# Constantes
V_IN = 24.0               # Input_Voltage (Volts)
V_F = 3.4 * 7          # LED_forward_voltage (Volts)
I_F = 0.080 * 7                  # LED_current (Ampères) - 80 mA
f_SW = 400000.0          # Switching_freq (Hertz) - 400 kHz
V_O = 3.2 * 7       # Average_output_Voltage (Volts)

# 1. Calcul de la Résistance
 #V_O / (1.34e-10 * f_SW)
R_ON =  V_O / (1.34e-10 * f_SW)
R_ON_reel = 274000
f_SW =  V_O / (1.34e-10 * R_ON_reel)
# 2. Calcul du temps d'activation
t_ON = (1.34e-10 * R_ON) / V_IN

# 3. Calcul du courant d'ondulation de l'inductance (delta_iL)
# Une valeur typique recommandée est de 40% du courant LED
delta_iL = 0.4 * I_F

# 4. Calcul de l'inductance minimale (L_MIN)
L_MIN = ((V_IN - V_O) * t_ON) / delta_iL

# Affichage des résultats
print("--- Résultats de calcul pour le LM3404 ---")
print(f"R_ON défini      : {R_ON / 1000:.1f} kOhms")
print(f"Fréquence (f_SW) : {f_SW / 1000:.1f} kHz avec 274kOhms")
print(f"Ondulation (ΔiL) : {delta_iL:.3f} A")
print(f"Inductance L_MIN : {L_MIN * 1e6:.1f} µH")
