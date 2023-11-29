import json

# Dummy-Funktionen für jeden Befehl
def not_halt():
    print("Not-Halt-Befehl ausgeführt")

def einstellungen_profil(value):
    print(f"Profil-Einstellung mit Wert {value} ausgeführt")

def einstellungen_konfiguration(value):
    print(f"Konfigurations-Einstellung mit Wert {value} ausgeführt")

#  Auswerten des JSON-Dateiformats
def parse_json_command(json_data):
    try:
        parsed_data = json.loads(json_data)
        if "cablecam" in parsed_data:
            control_list = parsed_data["cablecam"]
            for item in control_list:
                if "id" in item and "command" in item and "value" in item:
                    id = item["id"]
                    command = item["command"]
                    value = item["value"]

                    
                    commands = {
                        "nh": not_halt,
                        "ms": einstellungen_profil,
                        "ap": einstellungen_profil,
                        "an": einstellungen_profil,
                        "rs": einstellungen_konfiguration,
                        "np": einstellungen_konfiguration,
                        "or": einstellungen_konfiguration,
                        "cg": einstellungen_konfiguration,
                        "sp": einstellungen_konfiguration,
                        "do": einstellungen_konfiguration
                    }

                    
                    command_function = commands.get(command)
                    if command_function:
                        print(f"Ausführung für ID {id}:")
                        command_function(value)
                    else:
                        print(f"Unbekannter Befehl: {command}")
                else:
                    print("Fehlende 'id', 'command' oder 'value' in JSON-Steuerungselement.")

        else:
            print("Fehlendes 'control'-Feld im JSON.")

    except json.JSONDecodeError as e:
        print(f"Fehler beim Dekodieren des JSON: {e}")

# Beispiel JSON-Datei mit mehreren IDs
json_data = '''
{
    "cablecam": [
        {
            "id": "1",
            "command": "sp",
            "value": "pa"
        },
        {
            "id": "2",
            "command": "nh",
            "value": ""
        }
    ]
}
'''

parse_json_command(json_data)
