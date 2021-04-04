string = "http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager"

username = string.split('=')[1]
username = username.split('&')
print(username[0])

pwd = string.split('=')[2]
pwd = pwd.split('&')
print(pwd[0])

profile = string.split('=')[3]
profile = profile.split('&')
print(profile[0])

role = string.split('=')[4]
role = role.split('&')
print(role[0])

key = string.split('=')[5]
key = key.split('&')
print(key[0])




