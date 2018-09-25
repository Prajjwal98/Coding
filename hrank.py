
def fun(s):
    # return True if s is a valid email, else return False
    try:
        username, url = s.split('@')
        website, extension = url.split('.')
    except ValueError:
        return False

    if len(extension) > 3:
        return False
    elif not website.isalnum():
        return False
    elif not username.replace('-','').replace('_','').isalnum():
        return False
    return True

    #print(username)
    #print(url)
    #print(website)
    #print(extension)

ans = fun("someone_123@hackerrank.com")
print(ans)
