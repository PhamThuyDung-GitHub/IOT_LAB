from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/sensor', methods=['POST'])
def receive_data():
    sensor_data = request.json
    light_value = sensor_data['data']['light']
    num_lights = determine_leds(light_value)
    
    return jsonify({
        "error": False,
        "message": "Received light sensor value",
        "data": {
            "leds_on": num_lights
        }
    })

def determine_leds(light_value):
    if light_value < 100:
        return 3
    elif light_value < 200:
        return 2
    elif light_value < 300:
        return 1
    else:
        return 0

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=3000, debug=True)
