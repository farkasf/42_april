import requests
POKEAPI_WEB = "https://pokeapi.co/api/v2"

def import_abilities(poke_name):
    poke_web = POKEAPI_WEB + "pokemon/" + poke_name.lower()
    response = requests.get(poke_web)

    if response.status_code == 200:
        poke_data = response.json()
        abilities = []
        for ability in poke_data["abilities"]:
            abilities.append(ability["ability"]["name"])
        return (abilities)
    else:
        return None

poke_name = input("Enter the name of a Pokemon: ")
abilities = import_abilities(poke_name)
if abilities:
    print(f"Name: {poke_name.title()}")
    print(f"Abilities:")
    for ability in abilities:
        print("- " + ability.title())
else:
    print(f"Could not retrieve abilities of {poke_name.title()}.")