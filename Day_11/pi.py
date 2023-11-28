import requests

url = "https://api.stackexchange.com/2.3/search/advanced?order=desc&sort=activity&site=stackoverflow"
response = requests.get(url)

print(response.json()['items'])

