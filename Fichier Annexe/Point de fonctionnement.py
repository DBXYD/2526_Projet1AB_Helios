import matplotlib.pyplot as plt
import numpy as np

# ==========================================
# 1. DONNÉES
# ==========================================
I_0W = np.array([880])
Omega_0W = np.array([148.70]) 

I_200W = np.array([89])
Omega_200W = np.array([139.16]) 

# ==========================================
# 2. TRACÉ DU GRAPHIQUE GLOBAL
# ==========================================
plt.figure(figsize=(8, 6))

# Tracé des points
plt.plot(I_0W, Omega_0W, 'bo', markersize=10, label='Mesure (0 W)')
plt.plot(I_200W, Omega_200W, 'go', markersize=10, label='Mesure (200 W)')

# Mise en forme
plt.title("Points de fonctionnement $\Omega = f(I)$ en charge", fontsize=14)
plt.xlabel("Courant en ligne I", fontsize=12)
plt.ylabel("Vitesse de rotation $\Omega$ (rad/s)", fontsize=12)
plt.grid(True, linestyle=':', alpha=0.7)
plt.legend()

plt.show()

print("--- Résultats ---")
print(f"Vitesse à 0 W : {Omega_0W[0]:.2f} rad/s")
print(f"Vitesse à 200 W : {Omega_200W[0]:.2f} rad/s")