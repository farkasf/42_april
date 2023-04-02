import requests
POKEAPI_WEB = "https://pokeapi.co/api/v2"

def import_poke_abilities(poke_name):
    poke_web = POKEAPI_WEB + "/pokemon/" + poke_name.lower()
    download = requests.get(poke_web)

    if download.status_code == 200:
        poke_data = download.json()
        poke_abilities = []
        for ability in poke_data["abilities"]:
            poke_abilities.append(ability["ability"]["name"])
        return (poke_abilities)
    else:
        return None

poke_name = input("Enter the name of a Pokemon: ")
poke_abilities = import_poke_abilities(poke_name)
if poke_abilities:
    print(f"Name: {poke_name.title()}")
    print(f"Abilities:")
    for ability in poke_abilities:
        print("– " + ability.title())
else:
    print(f"Could not retrieve abilities of {poke_name.title()}. Check the name and try again.")
