text = """rnpu cebwrpg bs gur 97 pbzzba pber pbagnvaf na rapbqrq uvag. sbe
rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag arrqrq sbe
gur arkg pvepyr. guvf punyyratr vf vaqvivqhny, gurer vf bayl n
cevmr sbe bar fghqrag jvaare cebivqvat nyy qrpbqrq zrffntrf. nal
nqinagntrq crbcyr pna cynl, yvxr pheerag be sbezre fgnss, ohg gur
cevmr jvyy erznva flzobyvp. gur uvag sbe guvf svefg cebwrpg vf:
ynetr pbjf trarebfvgl pbzrf jvgu punegf naq sbhe oybaqr ungf gb qrsl
hccre tenivgl ureb"""

for c in range(26):
	l = []
	for i in text:
		if (ord('a') <= ord(i) <= ord('z')):
			if (ord(i) - ord('a') >= c):
				l.append(chr(ord(i) - c))
			else:
				l.append(chr(ord(i) + 26 - c))
		else:
			l.append(i)
	print(''.join(l))
	print()
	print()


# Solution: c = 13;

"""
Solution: Each project of the 97 Common Core contains an encoded hint. For each circle, only one project provides the correct hint needed for
the next circle. This challenge is individual, there is only a prize for one student winner providing all decoded messages.
Any advantaged people can play, like current or former staff, but the prize will remain symbolic.

The hint for this first project is: 
Large cows generosity comes with charts and four blonde hats to defy upper gravity hero
"""
