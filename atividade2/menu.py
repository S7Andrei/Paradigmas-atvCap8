def calc_quadrado(n):
    return n * n

def calc_fatorial(n):
    fat = 1
    for i in range(1, n+1):
        fat *= i
    return fat

while True:
    print("\nMenu:")
    print("1. Calcular quadrado")
    print("2. Calcular fatorial")
    print("3. Sair")
    opcao = int(input("Escolha uma opção: "))

    if opcao == 1:
        num = int(input("Digite um número: "))
        print("Quadrado:", calc_quadrado(num))
    elif opcao == 2:
        num = int(input("Digite um número: "))
        print("Fatorial:", calc_fatorial(num))
    elif opcao == 3:
        print("Saida")
        break
    else:
        print("Opção inválida.")
